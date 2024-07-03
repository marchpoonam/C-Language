#include<stdio.h>
int main()
{
    int a[5],i,temp,j;
	   
	   printf("\nEnter five values in array\n");
	   for(i=0;i<5;i++)
	   { scanf("%d",&a[i]);
	   }
	   printf("\nDisplay array before sorting\n");
	   for(i=0;i<5;i++)
	   { printf("%d\t",a[i]);
	   }
	   //apply sorting logics
	   for(i=0;i<5;i++)
	   {
	      for(j=(i+1);j<5;j++)
	      {
		 if(a[i]>a[j])
		 {
		    temp=a[i];
		    a[i]=a[j];
		    a[j]=temp;
		 }
	      }
	   }
	   printf("\nDisplay array after sorting\n");
	   for(i=0;i<5;i++)
	   { printf("%d\t",a[i]);
	   }
	   return 0;
	}

