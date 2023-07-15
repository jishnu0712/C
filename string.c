#include <stdio.h>
#include <math.h>
int main()
{
    int n,firstDigit, lastDigit,digits, swappedNum;
    printf("Enter number = ");
    scanf("%d", &n);
    //Find last digit of a number
    lastDigit = n % 10;
    //Find total number of digits - 1
    digits    = (int)log10(n);
    //Find first digit
    firstDigit = (int) (n / pow(10, digits));
    
	// build new number
    swappedNum =  lastDigit;
    n = n - firstDigit * pow(10, digits); //cuts first digit
    n = n / 10; //cut last digit
    while(n!=0)
    {
		digits    = (int)log10(n); // recalculate number of digits left
		int t = (int) (n / pow(10, digits)); //select first digit in t
		n = n - t * pow(10, digits); //cuts first digit
		swappedNum = swappedNum*10+t;
		
	}
	swappedNum = swappedNum * 10 + firstDigit;
    printf("%d",n);
    printf("Number after swapping first and last digit: %d", swappedNum);
    return 0;
}
