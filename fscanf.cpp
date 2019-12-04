/*
fscanf() : Tired of all the clumpsy syntax to read from files? well, fscanf comes to the rescue.

int fscanf(FILE *ptr, const char *format, ...) 
fscanf reads from a file pointed by the FILE pointer (ptr), instead of reading from the input stream.

Consider the following text file abc.txt
NAME    AGE   CITY
abc     12    hyderbad
bef     25    delhi
cce     65    bangalore  

Now, we want to read only the city field of the above text file, ignoring all the other fields. 
A combination of fscanf and the trick mentioned above does this with ease
*/

#include<stdio.h>

int main()
{
	FILE* f = fopen("abc.txt", "r");
	if(f == NULL)
	{
		printf("no such file\n");
		return 0;
	}
	char *buf[20];
	while(fscanf(f, "%*s %*s %s" ,buf)==1)
		printf("%s\n", buf);
	return 0;
}