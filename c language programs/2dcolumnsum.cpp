#include<stdio.h>
int main()
{
	int arr[3][3],csum[3],i,j;
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
	     for(j=0;j<3;j++)
		 {
		 	printf("%d\t",arr[i][j]);
	     }
	     printf("\n");
	   }
	int sum=0;
    for(i=0;i<3;i++)
    {
     csum[i]=0;
	 for(j=0;j<3;j++)
		 {	
	 	 csum[i]=csum[i]+arr[j][i];
	     

	      } 
	      
	
    } 
    printf("\nAddition of columns:\n");
    for(j=0;j<3;j++)
    {
    	printf("%d\t",csum[j]);
	}
	printf("\n");
   
   	return 0; 
	 
}
