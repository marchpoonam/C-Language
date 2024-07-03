//Write a c program calculate sum of digit in string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int len,i;
	int digit=0,sum=0;
	printf("\nEnter String:");
	gets(str);
	len=strlen(str);
	printf("\nLength of string=%d",len);
	for(i=0;i<len;i++)
	{
		
	  if(str[i]>='0' && str[i]<='9')//poonam123
		{
			digit++;
			sum=sum+(str[i]-'0');
		}
	}
	printf("\nDigits=%d",digit);
	printf("\nSum of Digit=%d",sum);
	return 0;
}