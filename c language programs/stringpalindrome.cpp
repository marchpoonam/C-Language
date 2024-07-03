//Write a c program to check whether string is palindrome or not Without Using Inbuilt Function.
#include<stdio.h>
int main()
{
	char str[10],temp;
	int len=0,i=0,j,count=0;
	printf("\nEnter String:");
	gets(str);
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	printf("\nLength of string is:%d",len);
	printf("\nOriginal string:%s",str);
	char nstr[10];
	for(i=0;i<len;i++)
	{
		nstr[i]=str[i];
		
	}
	for(i=0,j=len-1;i<len/2;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	for(i=0;i<len;i++)
	{
		if(str[i]==nstr[i])
		{
			count++;
			
		}
	}
	printf("\nReverse string:%s",str);
	if(count==len)
	{
		printf("\nGiven String is Palindrome");
	}
	else
	{
		printf("\nGiven String is not Palindrome");
	}
	return 0;
}