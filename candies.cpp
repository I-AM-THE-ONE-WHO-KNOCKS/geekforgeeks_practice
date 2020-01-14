#include<iostream>
#include<math.h>
#include<cstring>

using namespace std;

int main()
{
int n = 10;
int k = 3;

int arr[k];

memset(arr, 0, sizeof(arr)); 

for(int i = 0; n > 0; i++)
{
	arr[i % k] += min(n, i+1);
	n -= i+1;
}

for(int j = 0; j < k; j++)
{
	cout<<arr[j]<<" ";
}

return 0;
}
