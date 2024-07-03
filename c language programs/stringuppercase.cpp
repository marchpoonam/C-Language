//Write a c program to string convert the lowercase to uppercase Without Using Inbuilt Function.

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
	for(i=0;i<len;i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
		
	}
	printf("\nUppercase string is:%s",str);
	return 0;
}
