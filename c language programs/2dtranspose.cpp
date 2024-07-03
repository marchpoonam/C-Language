
#include<stdio.h>
int main()
{
	int arr[3][3],i,j,temp;
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
   //transpose
   for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
		 {
	        if(i>j)
	         {
	           temp=arr[i][j];
		       arr[i][j]=arr[j][i];
		       arr[j][i]=temp;
	         }
	    } 
	 
	}  
    printf("\n");
    printf("\nTranspose  of Array:\n");
    	for(i=0;i<3;i++)
	      {
		    for(j=0;j<3;j++)
		    {
			 printf("%d\t",arr[i][j]);
            }
	        printf("\n");
          }
 return 0; 
	 
}
