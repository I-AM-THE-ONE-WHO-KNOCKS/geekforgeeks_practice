/*

The idea of this article is to demonstrate map and pair in C++ STL.

We declare a map d_pairs that uses a character pair key and count as 
value. We iterate over the given string from the starting index to 
store every consecutive pair if not present already and increment 
its count in the map. After completion of the loop, we get all distinct 
consecutive pairs and their corresponding occurrence count in the map container.

Please note that map is used as we need output in sorted order. 
We could use a unordered_map() if output was not needed in sorted order. 
Time complexity of underdered_map() operations is O(1) while that of map is O(Log n)
 
*/

#include<iostream>
#include<utility>
#include<map>
#include<iterator>

using namespace std;

void printDistinctSubStrs(string str) 
{
	map<pair<char, char>, int>m;


    // Count occurrances of all pairs 
	for(int i = 0; i < str.size() - 1; i++)
	{
		m[make_pair(str[i], str[i+1])]++;
	}

	// Traverse map to print sub-strings and their 
    // counts. 
    cout << "Distinct sub-strings with counts:\n"; 
    for (auto it=m.begin(); it!=m.end(); it++) 
        cout << it->first.first << it->first.second 
             << "-" << it->second << " "; 
}

// Driver code 
int main() 
{ 
    string str = "abcacdcacabacaassddssklac"; 
    printDistinctSubStrs(str); 
    return 0; 
} 