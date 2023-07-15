#include<stdio.h>


int main()
{
	int n,i=2;
	float sum=0.0;
	scanf("%d",&n);
	
	printf("1 ");
	while(i<=n)
	{
		printf("+ 1/%d ",i);
		sum += 1/(float)i;
		i++;
	}
	sum++;
	
	
	printf("= %f",sum);
	return 0;
}
