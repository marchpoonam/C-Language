//Write a c program to count vowel and consonent in string Without Using Inbuilt Function.
#include<stdio.h>
int main()
{
	char str[20];
	int len=0,i=0;
	printf("\nEnter String:");
	gets(str);
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	printf("\nLength of string is:%d",len);
	int vowel=0,consonant=0,space=0,digit=0;
	for(i=0;i<len;i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			vowel++;
		}
		else if(str[i]>'a' && str[i]<='z' || str[i]>'A' && str[i]<='Z')
		{
			consonant++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			digit++;
		}
		else
		{
			space++;
		}
		
	}
	printf("\nVowels=%d",vowel);
	printf("\nconsonant=%d",consonant);
	printf("\ndigits=%d",digit);
	printf("\nspaces=%d",space);
	return 0;
}