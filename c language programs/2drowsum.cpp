#include<stdio.h>
int main()
{
	int arr[3][3],i,j;
	//for input array elements from user
	printf("Enter the  elements of array:");
	  for(i=0;i<3;i++)
	  {
	     for(j=0;j<3;j++)
		 {
		 	scanf("%d",&arr[i][j]);
	     
	     }
	   }
	  
	  //for display array elements
    printf("\n\nDisplay the all elements of Array in Matrix form:\n\n");
    
    for(i=0;i<3;i++)
    {
     int sum=0;	
	 for(j=0;j<3;j++)
		 {
	 printf("%d\t",arr[i][j]);
	 sum=sum+arr[i][j];
	 } 
	 printf("=%d",sum);
	 printf("\n");
   }
   	return 0; 
	 
}
