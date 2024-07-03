//Write a c program to find the length in string Without Using Inbuilt Function.
#include<stdio.h>
int main()
{
	char str[10];
	int len=0,i=0;
	printf("\nEnter String:");
	gets(str);
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	printf("\nLength of string is:%d",len);
	return 0;
}