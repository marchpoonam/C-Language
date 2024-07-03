//Write a c program to count white spaces in string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int len,i;
	int ws=0,word=0;
	printf("\nEnter String:");
	gets(str);
	len=strlen(str);
	printf("\nLength of string=%d",len);
	for(i=0;i<len;i++)
	{
			if(str[i]==' ')
		{
			ws++;
		}
	}
	word=ws+1;
	printf("\nwhite spaces=%d",ws);
	printf("\nWords=%d",word);
	return 0;
}