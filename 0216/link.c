#include <stdlib.h>

struct node {
	int x;
	struct node *next;
};

int main()
{
	struct node *root;

	root = (struct node *) malloc (sizeof(struct node));

	root->next = 0;

	root->x = 5;
}
