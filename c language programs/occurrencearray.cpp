#include<stdio.h>
int main()
{
    int a[10],i,attempt=0,j;
	   
	   printf("\nEnter ten values in array:\n");
	   for(i=0;i<10;i++)
	     { 
	       scanf("%d",&a[i]);
	     }
	    printf("\nDisplay array:\n");
	      for(i=0;i<10;i++)
	      {
		   printf("%d\t",a[i]);
	      }
	       
	      for(i=0;i<10;i++)
	         {
	         	attempt=1;
	            for(j=(i+1);j<10;j++)
	              {
		            if(a[i]==a[j])
		             {
		 	           a[j]=-1;
		               attempt=attempt+1;
		             }
	               }
	            if(a[i]!=-1)
	            { 
	            	printf("%d occurrence is:%d\n",a[i],attempt);
				}
	         }
	 
	 	
		  
	   
	   
	   
	   return 0;
	}
/*
#include<stdio.h>
int main()
{
	int a[8],i,j,count;
	int len=sizeof(a)/sizeof(a[0]);
	printf("Enter the array values:\n");
	for(i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<8;i++)
	{
		for(j=i+1;j<8;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				    a[i]=a[j];
				    a[j]=temp;
			}
		}
	}
Nilesh Chougule
15:43
printf("Display after ascending:\n");
	for(i=0;i<8;i++)
	{
		printf("%d\t",a[i]);
	}
	// occurance logic
	 count=1;
    printf("Display after occurance:\n");
    for(i=0;i<8;i++)
    {

		 if(a[i]==a[i+1])
		 {
		 	count++;
		 }
		 else
		 {
		 	printf("%d--->%d\n",a[i],count);
		 	count=1;
		 }
	}
	return 0;
}
*/
