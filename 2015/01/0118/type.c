#include <stdio.h>

int main() 
{
	int x;
	for ( x = 0; x < 128; x++ ) {
		printf( "%d = %c\n", x, (char)x );
	}
	getchar();
}
