#include<stdio.h>

void fib(int n)
{
	int a=0,b=1,c;
	
	for(int i=0;i<n;i++)
	{	
		c = a+b;
		printf("%d  ",c);
		a=b;
		b=c;
	}
}

void fibRecur(int a,int b,int n)
{
	
	
	int c=a+b;
	if(c<=n)
	{
	printf("%d  ",c);
	a=b;
	b=c;
	fibRecur(a,b,n);
	}
}

void fibRecu(int a,int b,int n)
{
	if(n==0)
		return;
	
	int c=a+b;
	printf("%d  ",c);
	
	fibRecu(b,c,n-1);
	
}

int main()
{
	//fib(10);
	fibRecu(1,0,10);
	return 0;
}
