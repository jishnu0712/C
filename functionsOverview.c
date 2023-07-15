#include<stdio.h>


int fact(int n)
{
    if (n==0) {
        return 1;
    }
    
    return n*fact(n-1);
}

void printNumb(int n)
{
    if (n==0)  {
        return;
    }
    printNumb(n-1);
    printf("%d  ",n);
}

int NaturalNumSum(int n)
{
    if (n==0) {
        return 0;
    }
    return n+NaturalNumSum(n-1);
}

void fibo(int a,int b,int n)
{
     if (n==0)
        return;

    int c=a+b; 
    printf("%d  ",c);
    fibo(b,c,n-1);
}

int calculatePow(int x,int n)
{
    if(n==0) return 1;
    if(x==0) return 0;
    return x * calculatePow(x,n-1);
}

int main() {
   
    //printf("%d",fact(6));
    //printNumb(10);
    // printf("%d",NaturalNumSum(5));
    //fibo(0,1,100000);
    printf("%d",calculatePow(3,3));
    return 0;
}
