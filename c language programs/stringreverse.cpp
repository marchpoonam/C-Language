//Write a c program to reverse a given string Without Using Inbuilt Function.
#include<stdio.h>
int main()
{
	char str[10],temp;
	int len=0,i=0,j;
	printf("\nEnter String:");
	gets(str);
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	printf("\nLength of string is:%d",len);
	printf("\nOriginal string:%s",str);
	for(i=0,j=len-1;i<len/2;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("\nReverse string:%s",str);
	return 0;
}