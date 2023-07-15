#include <stdio.h>
void Bubblesort(int a[], int size)
{
	int i, j, temp;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int i, size;
	printf("enter the size of an array\n");
	scanf("%d", &size);
	int array[size];
	printf("enter the elements\n");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}
	Bubblesort(array, size);
	for (i = 0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}
	return 0;
}
