#include<stdio.h>
void vowelFilter(char a[])
{
	int i;
	for(i=0;a[i] != '\0';i++)
	{
		char ch=a[i];
		if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		{   }
		else
		{
		printf("%c",ch);
		}	
	}
}
 int main()
 {
 	char arr[100]; // Array type char
 	printf("enter the String\n");
 	gets(arr);  // input string
 	
	vowelFilter(arr); // function call
    return 0;	
	
}
