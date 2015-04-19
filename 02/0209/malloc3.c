#include <stdio.h>
#include <stdlib.h>

struct rec
{
	int i;
	float PI;
	char A;
};

int main()
{
	struct rec *ptr_one;
	ptr_one = (struct rec *) malloc(sizeof(struct rec));

	ptr_one->i = 10;
	ptr_one->PI = 3.14;
	ptr_one->A = 'a';

	printf("Fisrt Value : %d\n", ptr_one->i);
	printf("Second Value : %f\n", ptr_one->PI);
	printf("Third Value : %c\n", ptr_one->A);

	free(ptr_one);

	return 0;
}
