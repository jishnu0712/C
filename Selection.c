#include<stdio.h>

void Selection(int arr[],int size)
{
	int i,j,minIndex,temp;
	for(i=0;i<size-1;i++)
	{
		minIndex = i;
		for(j=i+1;j<size;j++)
		{
			if(arr[minIndex]>arr[j])
			{	minIndex = j;	}
		}
		temp = arr[minIndex]; //exchange
		arr[minIndex]=arr[i];
		arr[i]=temp;
	}
}

int main()
{
	int i;
	int arr[] = {12,1,17,20,22,-5,-6,1,0};
	for(i=0;i<9;i++)
	{	printf("%d\t",arr[i]);}
	printf("\n");
	Selection(arr,9);
	for(i=0;i<9;i++)
	{	printf("%d\t",arr[i]);}
	return 0;
}