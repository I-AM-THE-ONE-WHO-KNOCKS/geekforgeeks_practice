#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
	int array[3] = {1, 2, 3};

	sort(array, array + 3);

	cout<<"Possible next_permutations of 123 are"<<endl;

	do{
		cout<<array[0]<<array[1]<<array[2]<<endl;
	}while(next_permutation(array, array + 3));

	cout<<"after next permutation loop"<<" "<<"array :"<<" "<<array[0]<<array[1]<<array[2]<<endl;

	reverse(array, array + 3);

	cout<<"Possible prev_permutation of the 321 are"<<endl;

	do{
		cout<<array[0]<<array[1]<<array[2]<<endl;
	}while(prev_permutation(array, array + 3));

	cout<<"after prev permutation loop"<<" "<<"array :"<<" "<<array[0]<<array[1]<<array[2]<<endl;

	return 0;
}

/*Lexicographic order is the way of ordering of words based 
on the alphabetical order of their component letters. It is 
also known as lexical order, dictionary order and alphabetical 
order. It is similar to the way in we search any word in the 
dictionary. We start our searching by simply searching for 
the first letter of the word. Then we try to find the the 
second letter and so on. The words in dictionary are arranged 
in a lexicographic order.

Let us understand it clearly with the help of some examples.

In case of strings for example consider ABC then all its 
permutations in lexicographical order will be “ABC, ACB, BAC, BCA, CAB, CBA”.

We can also apply it to arrange subsets of a set in mathematics 
in order.For example, the subsets of {1,2,3} in lexicographic 
order are “{},{1},{1,2},{1,2,3},{1,3},{2},{2,3},{3}”.*/

/*
syntax:
template 
bool next_permutation (BidirectionalIterator first,
                       BidirectionalIterator last);
Parameters: 
first, last : Bidirectional iterators to the initial
and final positions of the sequence. The range 
used is [first, last), which contains all the elements 
between first and last, including the element pointed 
by first but not the element pointed by last.

return value: 
true : if the function could rearrange 
the object as a lexicographicaly greater permutation.
Otherwise, the function returns false to indicate that 
the arrangementis not greater than the previous, 
but the lowest possible (sorted in ascending order).


template 
bool prev_permutation (BidirectionalIterator first,
                         BidirectionalIterator last );
parameters: 
first, last : Bidirectional iterators to the initial
and final positions of the sequence. The range 
used is [first, last), which contains all the
elements between first and last, including 
the element pointed by first but not the element
pointed by last.

return value: 
true : if the function could rearrange 
the object as a lexicographicaly smaller permutation.
Otherwise, the function returns false to indicate that 
the arrangement is not less than the previous, 
but the largest possible (sorted in descending order).*/