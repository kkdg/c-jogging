#include <stdio.h>

int main() 
{

	char astring[10];

	int i = 0;

	scanf("%s", astring );

	for(i = 0; i < 10; i++ )
	{
		if ( astring[i] == 'a' ) 
		{
			printf( "You entered an a!\n" );
		}
	}	
}	
