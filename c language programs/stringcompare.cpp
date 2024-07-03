#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int i,len1,len2,diff,x;
	printf("\nEnter First string:");
	gets(str1);
	printf("\nEnter Second string:");
	gets(str2);
	len1=0;
	i=0;
	while(str1[i]!=NULL)
	{
		i++;
		len1++;
	}
	len2=0;
	i=0;
	while(str2[i]!=NULL)
	{
		i++;
		len2++;
	}
	printf("\nLen1=%d\n len2=%d",len1,len2);
	if(len1>=len2)
	{
		x=len1;
	}
	else
	{
		x=len2;
	}
	for(i=0;i<x;i++)
	{
		diff=str1[i]-str2[i];
		if(diff>0)
		{
			printf("\n%s is greater than %s",str1,str2);
			break;
		}
		if(diff<0)
		{
			printf("\n %s is smaller than %s",str1,str2);
			break;
		}
		
	}
	if(diff==0)
	{
		printf("\n %s and %s are same",str1,str2);
	}
	return 0;
}