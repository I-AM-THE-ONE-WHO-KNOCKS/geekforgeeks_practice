#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main()
{
	unordered_map<int, string> map;

	map.insert(make_pair(0, "zero"));
	map.insert(make_pair(1, "one"));
	map.insert(make_pair(2, "two"));

	cout<<map[1]<<endl;
	
	return 0;
}
