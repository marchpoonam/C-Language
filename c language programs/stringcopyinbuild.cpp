// Write a c program to copy one string in another string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int result;
	printf("\nEnter First string:");
	gets(str1);
	printf("\n Enter second string:");
	gets(str2);
	strcpy(str1,str2);
	printf("\nFirst string is:%s",str1);
	printf("\nsecond string is:%s",str2);
	return 0;
}
	