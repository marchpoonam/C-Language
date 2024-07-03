//Write a c program to reverse given string using inbuild function.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("\nEnter a string:");
	gets(str);
	strrev(str);
	printf("\n Reverse string is:%s",str);
	return 0;
}