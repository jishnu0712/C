#include<stdio.h>

int fact(int n)
{
    int sum = 1;
    for(int i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    return sum;
}

int factRecu(int n)
{
    if(n==1) {
        return 1;
    }
    return n*factRecu(n-1);
}

int main()
{
    int n=7;
    printf("%d",factRecu(n));
  
    return 0;
}