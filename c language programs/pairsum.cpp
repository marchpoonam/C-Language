/*12) . Write a program in C to find a pair with given sum in the array.
Expected Output :
The given array : 6 8 4 -5 7 9
The given sum : 15
Pair of elements can make the given sum by the value of index 0 and 5*/
#include<stdio.h>
int main()
{
    int a[10],temp,i,j,sum,n;
    printf("\nEnter the size of Array:");
    scanf("%d",&n);
	   
	   printf("\nEnter %d values in array:\n",n);
	   for(i=0;i<n;i++)
	     { 
	       scanf("%d",&a[i]);
	     }
	    printf("\nDisplay array:\n");
	      for(i=0;i<n;i++)
	      {
		   printf("%d\t",a[i]);
	      }
	      printf("\nEnter the sum:");
	      scanf("%d",&sum);
	      for(i=0;i<n;i++)
	      
	     	{
	      	for(j=i+1;j<n;j++)
	      	{
	      		temp=a[i]+a[j];
	      		if(sum==temp)
	      		{
	      			printf("\n\n\nPair for required sum=Index[%d,%d]--->Elements{%d,%d}",i,j,a[i],a[j]);
	      			break;
				  }
				 
			  }
		  }
		  
		return 0;
	}
