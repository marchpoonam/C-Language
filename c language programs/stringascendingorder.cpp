//Write a C program to dispaly a given string in ascending order
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],temp;
	int len,i,j;
	printf("\nEnter a string:");
	gets(str);
	printf("\nBefore sorting string:%s",str);
	len=strlen(str);
	printf("\nlength of String=%d",len);
	for(i=0;i<len;i++)
	{
	   for(j=i+1;j<len;j++)
	   {
	     if(str[i]>str[j])
		   {
		    temp=str[i];
		    str[i]=str[j];
		    str[j]=temp;
		   }
	   }
    }  
	printf("\nDisplay string after sorting:%s",str);
	   
	return 0;
}