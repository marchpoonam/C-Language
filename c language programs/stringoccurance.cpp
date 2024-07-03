//Write a C program to find the frequency of characters in given string.
#include<stdio.h>
int main()
{
	char str[100],ch;
	int i,count=0;
	printf("\n Enter any string:");
	gets(str);
	printf("\n Enter the searched character:");
	scanf("%c",&ch);
	i=0;
	while(str[i]!=NULL)
	{
		if(ch==str[i])
		{
			count++;
		}
		i++;
	}
	printf("\n %c found %d times",ch,count);
	return 0;
	
}