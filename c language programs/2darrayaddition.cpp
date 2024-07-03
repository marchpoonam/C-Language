
//Q 2. Write c program to addition of two matrices of same size.
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;	//for input array elements from user
	printf("Enter the  elements of array1:");
	  for(i=0;i<3;i++)
	  {
	     for(j=0;j<3;j++)
		 {
		 	scanf("%d",&a[i][j]);
	     }
	  }
	  printf("Enter the  elements of array2:");
	  for(i=0;i<3;i++)
	  {
	     for(j=0;j<3;j++)
		 {
		 	scanf("%d",&b[i][j]);
	     }
	  }
	  
	  //for display array elements
    printf("\n\nDisplay the all elements of Array1 in Matrix form:\n\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
		 {
	        printf("%d\t",a[i][j]);
	 
	     } 
	 
	    printf("\n");
   }  
   printf("\n\nDisplay the all elements of Array2 in Matrix form:\n\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
		 {
	        printf("%d\t",b[i][j]);
	 
	     } 
	 
	    printf("\n");
   }  
   
   //Addition Logic
    for(i=0;i<3;i++)
	  {
	     for(j=0;j<3;j++)
		 {
		 	c[i][j]=a[i][j]+b[i][j];
	     }
	     printf("\n");
	  }
	 //addition stote in third array
	  printf("\n\nAfter Addition Display array in Matrix form:\n\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
		 {
	        printf("%d\t",c[i][j]);
	 
	     } 
	 
	    printf("\n");
   }  
 return 0; 
	 
}
