#include<stdio.h>
int main()
{
	int arr[5],i;
	//for input array elements from user
	printf("Enter the 5 elements of array:");
	  for(i=0;i<5;i++)
	  {
	     scanf("%d",&arr[i]);
	     
	  }
	  
	  //for display array elements
    printf("\n\nDisplay the all elements of Array:\n");
    for(i=0;i<5;i++)
    {
	 
	 printf("%d\t",arr[i]);
	 } 
	 
	 
	
	 
	 
	return 0; 
	 
}
