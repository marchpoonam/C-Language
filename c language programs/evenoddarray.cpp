#include<stdio.h>
int main()
{
	int arr[5],i,j=0,k=0,even[5],odd[5];
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
	 
	 for(i=0;i<5;i++)
	 {
	 	if(arr[i]%2==0)
	 	{
	 		even[j]=arr[i];
	 		
	 		j++;
		 }
		 else
		 {
		 	odd[k]=arr[i];
		 	k++;
		 }
	 }
	 
	 printf("\n\nThe elements of Even are:\n");
        for (i = 0; i < j; i++)
        {
            printf("%d\t", even[i]);
        }
 
        printf("\n\nThe elements of Odd are:\n");
        for (i = 0; i < k; i++)
        {
            printf("%d\t", odd[i]);
        }
	 
	
	 
	 
	return 0; 
	 
}
