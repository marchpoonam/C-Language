#include<stdio.h>
int main()
{
    int a[5],i,miss,j;
	   
	   printf("\nEnter five values in array\n");
	   for(i=0;i<5;i++)
	   { scanf("%d",&a[i]);
	   }
	   printf("\nDisplay array:\n");
	   for(i=0;i<5;i++)
	   { printf("%d\t",a[i]);
	   }
	   printf("\nMissing Elements=");
	    for(i=0;i<5;i++)
	    {
	    	
	      for(j=a[i]+1;j<5;j++)
	      {
	      		   printf("%d\t",j);

		  }
		}
	   
	   
	   return 0;
	}

