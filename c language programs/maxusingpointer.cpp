#include<stdio.h>
int main()
{
	int arr[5],i,min,max;
	int *ptr;
	ptr=arr;//baseaddress
	printf("Enter the 5 elements of array:");
	  for(i=0;i<5;i++)
	  {
	     scanf("%d",ptr+i);   
	  }
	  
	  min=*(ptr+0);
    for(i=1;i<5;i++)
    {
	 if(min > *(ptr+i))
	 {   
	 	min=*(ptr+i);
	 	
     }     
    }
	printf("\nminimum element is:%d",min);
	  
	   max=*(ptr+0);
    for(i=1;i<5;i++)
    {
	 if(max < *(ptr+i))
	 {   
	 	max=*(ptr+i);
	 	
     }     
    }
	printf("\nmaximum element is:%d",max);
	 
	 
	
	return 0; 
	 
}
