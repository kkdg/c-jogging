#include <stdio.h>

int main()
{
	int i,j;
	int arr[10];
	for ( i = 0; i < 10; i++ )
	{
		arr[i] = i;
	}
	for ( j = 1; j <= 10; j++ )
	{
		if ( arr[j] == *(arr+j) )
		{	
			printf("This is %d\n", arr[j]);
		} else {
			printf("End of the loop.\n");
		}
	}
	long unsigned int a = sizeof(int);
	printf( "%lu", a);
	return 0;
}
