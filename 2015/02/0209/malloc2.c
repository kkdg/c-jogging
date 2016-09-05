#include <stdio.h>
#include <stdlib.h>

typedef struct rec
{
	int i;
	float PI;
	char A;
}RECORD;

int main()
{
	RECORD *ptr_one;

	ptr_one = (RECORD *) malloc (sizeof(RECORD));

	(*ptr_one).i = 10;
	(*ptr_one).PI = 3.14;
	(*ptr_one).A = 'a';

	printf("First Value: %d\n", (*ptr_one).i);
	printf("Second Value: %f\n", (*ptr_one).PI);
	printf("Third Value: %c\n", (*ptr_one).A);

	free(ptr_one);

	return 0;
}
