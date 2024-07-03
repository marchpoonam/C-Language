/*19) Write a program in C to find two elements whose sum is closest to zero
Expected Output :
The given array is : 38 44 63 -51 -35 19 84 -69 4 -46
The Pair of elements whose sum is minimum are:
[44, -46]
*/
#include<stdio.h>
int main()
{
    int a[10],i,j,sum,n,m=-32767,k,l;
    printf("\nEnter the size of Array:");
    scanf("%d",&n);
	   
	   printf("\nEnter %d values in array:\n",n);//38 44 63 -51 -35 19 84 -69 4 -46
	   for(i=0;i<n;i++)
	     { 
	       scanf("%d",&a[i]);
	     }
	    printf("\nDisplay array:\n");
	      for(i=0;i<n;i++)
	      {
		   printf("%d\t",a[i]);
	      }
	     
	      for(i=0;i<n;i++)
		{
	      	for(j=i+1;j<n;j++)
	      	{
	      		sum=a[i]+a[j];
	      		//printf("%d %d %d\n",a[i],a[j],sum);
	      		if(sum<0)
	      		{
	      		if(m<sum)
	      		{
	      		m=sum;
				  k=a[i];
				  l=a[j];	
				  }
				  }
				 
			  }
		  }
		  printf("**%d %d %d",m,k,l);
		 
		 
		  return 0;
	}
