//Write a c program to copy one string into another string Without Using Inbuilt Function.
#include<stdio.h>
int main()
{
	char str1[10],str2[10];
	int len=0,i=0;
	printf("\nEnter String:");
	gets(str1);
	while(str1[i]!='\0')
	{
		len++;
		i++;
	}
	printf("\nLength of string1 is:%d",len);
	for(i=0;i<len;i++)
	{
		str2[i]=str1[i];
	}
	printf("\nString1=%s\nString2=%s",str1,str2);
	
	return 0;
}