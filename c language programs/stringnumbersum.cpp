//Write a c program calculate sum of number in string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int len,i;
	int digit=0,sum=0,num=0;
	printf("\nEnter String:");
	gets(str);
	len=strlen(str);
	printf("\nLength of string=%d",len);
	for(i=0;i<len;i++)
	{
		
	  if(str[i]>='0' && str[i]<='9')//poo34nam78
		{
			digit++;
			num=num*10+(str[i]-'0');
		}
		else
		{
			
			sum=sum+num;
			num=0;
		}
	}
	sum=sum+num;
	printf("\nDigits=%d",digit);
	printf("\nSum of number=%d",sum);
	return 0;
}