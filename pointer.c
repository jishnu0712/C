#include <stdio.h>

int main()
{
	int var = 10;
	int *ptr = &var;
	printf("%d\n", *ptr);
	*ptr = 20;
	printf("%d\n", var);
	int **ptr1 = &ptr;
	**ptr1 = 30;
	printf("%d\n", var);

	return 0;
}
