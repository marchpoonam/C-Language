#include<stdio.h>
int main()
{
	int arr[5],i,*ptr;
	ptr=&arr;
	//for input array elements from user
	printf("Enter the 5 elements of array:");
	  for(i=0;i<5;i++)
	  {
	     scanf("%d",ptr+i);
	     
	  }
	  
	  //for display array elements
    printf("\n\nDisplay the all elements of Array:\n");
    for(i=0;i<5;i++)
    {
	 
	 printf("%d\t",*(ptr+i));
	 } 
	 
	 
	
	 
	 
	return 0; 
	 
}
