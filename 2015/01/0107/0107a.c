#include <stdio.h>

int main()
{
	int x;
	int *p;

	p = &x;
	scanf( "%d", &x );
	printf( "%d", *p );
	getchar();
}


