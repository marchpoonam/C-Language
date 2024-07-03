#include<stdio.h>
int main()
{
	int arr[5],i,min,max;
	printf("Enter the 5 elements of array:");
	  for(i=0;i<5;i++)
	  {
	     scanf("%d",&arr[i]);   
	  }
	  
	  min=arr[0];
    for(i=1;i<5;i++)
    {
	 if(min>arr[i])
	 {   
	 	min=arr[i];
	 	
     }     
    }
	printf("\nminimum element is:%d",min);
	  
	   max=arr[0];
    for(i=1;i<5;i++)
    {
	 if(max<arr[i])
	 {   
	 	max=arr[i];
	 	
     }     
    }
	printf("\nmaximum element is:%d",max);
	 
	 
	
	return 0; 
	 
}
