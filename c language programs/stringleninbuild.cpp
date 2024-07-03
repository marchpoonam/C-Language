//Write a c program to find length of given string using inbuild function.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int len;
	printf("\nEnter a string:");
	gets(str);
	len=strlen(str);
	printf("\nlength of String=%d",len);
	return 0;
}