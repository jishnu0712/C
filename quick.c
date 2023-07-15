#include<stdio.h>

int partition(int arr[],int low,int high)
{
	int pivot = arr[low];
	int l = low +1;
	int h = high;
	
	do
	{
		while(arr[l]<pivot)
			l++;
		while(arr[h]>pivot)
			h--;
		if(l<h)
		{
			int t=arr[l];
			arr[l]=arr[h];
			arr[h]=t;			
		}
		
	}while(l<h);
	arr[low]=arr[h];
	arr[h]=pivot;
	return h;
}

void qSort(int arr[],int low,int high)
{
	if(low<high)
	{
		int p=partition(arr,low,high);
		qSort(arr,low,p-1);
		qSort(arr,p+1,high);
	}
}

int main()
{
	int i,size;
	printf("enter the size of an array\n");
	scanf("%d",&size);
	int array[size];
	printf("enter the elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	qSort(array,0,size-1);
	for(i=0;i<size;i++)
	{
		printf("%d\t",array[i]);
	}
	return 0;
}
