
#include<stdio.h>
void InsertionSort(int A[],int size)
{
	int i,j,key;
	for(i=1;i<size;i++)
	{
		key=A[i];
		j=i-1;
		
		while(j>=0&&key<A[j])
		{
			A[j+1]=A[j];
			j=j-1;
		}
		A[j+1]=key;	
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
	InsertionSort(array,size);
	for(i=0;i<size;i++)
	{
		printf("%d\t",array[i]);
	}
	return 0;
}
