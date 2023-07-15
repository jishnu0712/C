#include <stdio.h>
#include <stdlib.h>

// mergeArrayss two arrays
mergeArrays(int A[], int sizeA, int B[], int sizeB, int *C)
{
	for (int i = 0; i < sizeA; i++)
	{
		C[i] = A[i];
	}
	for (int j = 0; j < sizeB; j++)
	{
		C[sizeA++] = B[j];
	}
}

int main()
{
	int sizeA = 0, sizeB = 0, i;
	printf("Enter size of array A and B respectively\n");
	scanf("%d%d", &sizeA, &sizeB);
	// declare arrays
	int A[sizeA];
	int B[sizeB];
	int sizeC = sizeA + sizeB;
	printf("Enter the elements of Array A\n");
	for (i = 0; i < sizeA; i++)
	{
		scanf("%d", &A[i]);
	}

	printf("Enter the elements of array B\n");
	for (i = 0; i < sizeB; i++)
	{
		scanf("%d", &B[i]);
	}

	int *C = (int *)malloc(sizeC * sizeof(int)); // dynamic allocation .. Next day porabo
	mergeArrays(A, sizeA, B, sizeB, C);
	for (i = 0; i < sizeA + sizeB; i++)
	{
		printf("%d ", C[i]);
	}
	return 0;
}
