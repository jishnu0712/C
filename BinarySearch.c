#include <stdio.h>
void bsearch(int A[], int size, int term)
{
	int mid, flag = 0, f = 0, l = size - 1, loc;
	while (f <= l)
	{
		mid = (f + l) / 2;
		if (term > A[mid])
		{
			l = mid - 1;
		}
		if (term < A[mid])
		{
			f = mid + 1;
		}
		else
		{
			flag = 1;
			loc = mid;
			printf("item found at %d loc", loc + 1);
			break;
		}
	}
	if (flag == 0)
		printf("item not found");
}
int main()
{
	int i, size, term;
	printf("enter the size of an array\n");
	scanf("%d", &size);
	int arr[size];
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("enter search term\n");
	scanf("%d", &term);
	bsearch(arr, size, term);
	return 0;
}
