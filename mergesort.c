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
    int l = low,  j = mid + 1;
    int i = low; //pointer of auxilarry array
    int B[high-low+1];

    while (l <= mid && j <= high)
    {
        if (arr[l] < arr[j])
        {    B[i++] = arr[l++];}
        else
        {   B[i++] = arr[j++];}
    }
    while (l <= mid)
    {
        B[i++] = arr[l++];
    }
    while (j <= high)
    {
        B[i++] = arr[j++];
    }
    for (int k = low; k <= high; k++)
    {
        arr[k] = B[k];
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

    mergeSort(array, 0, size-1);
    for (i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}
