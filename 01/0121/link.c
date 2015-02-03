#include <stdlib.h>

struct node {
	int x;
	struct node *next;
};

int main() 
{
	struct node *root;

	struct node *conductor;

	root = malloc( sizeof(struct node));

	root->next = 0;

	root->x =12;

	conductor = root;

	if ( conductor != 0 ) {
		while ( conductor->next != 0 )
		{
			conductor = conductor->next;
		}
	}

	conductor->next = malloc( sizeof(struct node));

	conductor = conductor->next;

	if ( conductor == 0 )
	{
		puts( "Out of memory" );
		return 0;
	}

	conductor->next = 0;
	conductor->x = 42;

	return 0;
}
