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
    int sum=0;
    for(i=0;i<3;i++)
    {
    	
	 for(j=0;j<3;j++)
		 {
	 printf("%d\t",arr[i][j]);
	 sum=sum+arr[i][j];
	 } 
	 printf("\n");
    }
	 
	printf("\n\nSum of All Elements of array=%d",sum);
	 
	 
	 
	return 0; 
	 
}
