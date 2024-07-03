// Write a c program to count alphabet , digit and special symbol in string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int len,i;
	int specialsymbol=0,alphabet=0,digit=0,ws=0,word=0;
	printf("\nEnter String:");
	gets(str);
	len=strlen(str);
	printf("\nLength of string=%d",len);
	for(i=0;i<len;i++)
	{
			if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
		{
			alphabet++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			digit++;
		}
		else if(str[i]==' ')
		{
			ws++;
		}
	
		else
		{
			specialsymbol++;
		}
	}
	word=ws+1;
	printf("\nalphabet=%d",alphabet);
	printf("\ndigits=%d",digit);
	printf("\nspecialsymbol=%d",specialsymbol);
	
	printf("\nwhite spaces=%d",ws);
	printf("\nWords=%d",word);
	return 0;
}