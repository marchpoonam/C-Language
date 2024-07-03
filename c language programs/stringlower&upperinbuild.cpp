//Write a c program to convert given string upper case string using inbuild function.
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];

	printf("\nEnter a string in Uppercase form:");
	gets(str1);
	strlwr(str1);
	printf("\nLowercase String:%s",str1);
	printf("\nEnter a string in lowercase form:");
	gets(str2);
	strupr(str2);
	printf("\nUppercase String:%s",str2);
	return 0;
}