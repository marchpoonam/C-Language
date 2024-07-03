//Write a C program to find first occurrence of a character in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],temp;
	int len,count=0,i,j;
	int max=0,min=0,first=0,last=0;
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
	   
	for(i=0;i<len;i++)
	    { 
	        count=1;
	        for(j=(i+1);j<len;j++)
	            {
		          if(str[i]==str[j])
		             {
		 	          count++;
		             }
	            }
	       
	    printf("\n%c occurrence is:%d\n",str[i],count);
	}
	   
	   /*if(min>=count)
     	{
     		min=count;
     		first=str[i];
     	}
     		
		 
		 printf("%c occures minimum times of------>%d",first,min);*/
     
     	if(max<=count)
     	{
     		max=count;
     		last=str[i];
     	}
     		
		 
		 printf("%c occures maximum times of------>%d",last,max);
     

	return 0;
}