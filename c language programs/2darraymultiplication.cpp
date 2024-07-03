//Q 4. Write c program to multiplication of two square matrices of same size.
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;	//for input array elements from user
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
   
   //Multiplication Logic
    for(i=0;i<3;i++)
	  {
	     for(j=0;j<3;j++)
		 {
		   int sum=0;
		   for(k=0;k<3;k++)
		   {
		   
		 	sum=sum+a[i][k]*b[k][j];
		   } 
		   c[i][j]=sum;  
	     }
	  }
	 //addition stote in third array
	  printf("\n\nAfter multiplication Display array in Matrix form:\n\n");
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
