//Write a c program to concatinate two strings Without Using Inbuilt Function.
#include<stdio.h>
int main()
{
	char str1[10],str2[20];
	int len1=0,len2=0,i=0,j;
	printf("\nEnter String1:");
	gets(str1);
	printf("\nEnter String2:");
	gets(str2);
	while(str1[i]!='\0')
	{
		len1++;
		i++;
	}
	printf("\nLength of string1 is:%d",len1);
	i=0;
		while(str2[i]!='\0')
	{
		len2++;
		i++;
	}
	printf("\nLength of string2 is:%d",len2);
	for(i=0,j=len2;i<=len1;i++,j++)
	{
		str2[j]=str1[i];
	}
	printf("\nString1=%s\nString2=%s",str1,str2);
	
	return 0;
}