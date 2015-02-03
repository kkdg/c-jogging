#include <stdio.h>

int main() 
{

	FILE *fp;
	fp = fopen("./test.txt", "wb");
	char x[10]="ABCDEFGHIJ";
	fwrite(x, sizeof(x[0]), sizeof(x)/sizeof(x[0]), fp);

	return 0;
}
