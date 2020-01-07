#include<iostream>

using namespace std;

int main()
{
	int** array2d;
	int row = 10;
	int col = 10;

	// allocation
	array2d = (int**) malloc(row * sizeof(int));
	
	for(int i = 0; i < row; i++)
	{
		array2d[i] = (int*) malloc(col * sizeof(int));
	}

	//deallocation
	free(array2d);

	return 0;
}
