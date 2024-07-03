#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,min,max,size;
	int *ptr;
	printf("Enter the size of array:");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("Enter values in array:");
	  for(i=0;i<size;i++)
	  {
	     scanf("%d",&ptr[i]);   
	  }
	  
	  min=ptr[0];
    for(i=1;i<size;i++)
    {
	 if(min > ptr[i])	 {   
	 	min=ptr[i];
	 	
     }     
    }
	printf("\nminimum element is:%d",min);
	  
	   max=ptr[0];
    for(i=1;i<size;i++)
    {
	 if(max < ptr[i])
	 {   
	 	max=ptr[i];
	 	
     }     
    }
	printf("\nmaximum element is:%d",max);
	 
	 
	
	return 0; 
	 
}
