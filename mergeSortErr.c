#include <stdio.h>

void merge(int[], int, int, int);
void mergeSort(int[], int, int);

void mergeSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int mid = (low + high) / 2;
		mergeSort(arr, low, mid);
		mergeSort(arr, mid + 1, high);
		merge(arr, low, mid, high);
	}
}

void merge(int arr[], int low, int mid, int high)
{
	int i, j, l, k;
	i = low;
	j = mid + 1;

	l = low; // brr auxilary array ptr
	int brr[high - low + 1];

	while (i <= mid && j <= high)
	{
		if (arr[i] < arr[j])
		{
			brr[l++] = arr[i++];
		}
		else
		{
			brr[l++] = arr[j++];
		}
	}
	while (i <= mid)
	{
		brr[l++] = arr[i++];
	}
	while (j <= high)
	{
		brr[l++] = arr[j++];
	}

	for (k = low; k <= high; k++)
	{
		arr[k] = brr[k];
	}
}

int main()
{
	int i, size;
	printf("enter the size\n");
	scanf("%d", &size);
	int array[size];

	printf("enter the elements\n");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}

	mergeSort(array, 0, size - 1);

	for (i = 0; i < size; i++)
	{
		printf("%d  ", array[i]);
	}
	return 0;
}
