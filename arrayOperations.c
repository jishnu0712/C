#include <stdio.h>
void insert(int arr[], int *size)
{
	int i, loc, item;
	printf("list before insertion:");
	for (i = 0; i < *size; i++)
	{
		printf("%d \t", arr[i]);
	}
	printf("enter an item to insert\n");
	scanf("%d", &item);
	printf("enter the position to insert an items%d\n", item);
	scanf("%d", &loc);
	for (i = *size; i >= loc; i--)
	{
		arr[i + 1] = arr[i];
	}
	*size = *size + 1; // increment size
	arr[loc] = item;
	printf("list after insertion\n");
	for (i = 0; i < *size; i++)
	{
		printf("%d \t", arr[i]);
	}
}
void delete(int arr[], int *size)
{
	int i, j, item;
	printf("enter the item to be delete\n");
	scanf("%d", &item);
	for (i = 0; i < *size; i++)
	{
		if (arr[i] == item)
		{
			for (j = i; j < *size; j++)
			{
				arr[j] = arr[j + 1];
			}
			break;
		}
	}
	printf("list after deletion\n");
	*size = *size - 1;
	for (i = 0; i < *size; i++)
	{
		printf("%d\t", arr[i]);
	}
}
int main()
{
	int arr[100];
	int n = 1, ch, ele;
	printf("Enter number of elements");
	scanf("%d", &ele);
	for (int i = 0; i < ele; i++)
	{
		scanf("%d", &arr[i]);
	}
	while (n)
	{
		printf("enter 1 for insert\n2 for delete\n0 For exit\n");
		scanf("%d", &ch);
		if (ch == 1)
		{
			insert(arr, &ele);
		}
		if (ch == 2)
		{
			delete (arr, &ele);
		}
		if (ch == 0)
			n = 0;
	}
	return 0;
}
