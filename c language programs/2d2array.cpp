//Q.WACP 2D Array of size 3*3 and display the matrix.
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,flag=0;	//for input array elements from user
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
   
   //checking both arrays are same or not
    for(i=0;i<3;i++)
	  {
	     for(j=0;j<3;j++)
		 {
		 	if(a[i][j]==b[i][j]);
		 	{
		 		flag=1;
			 }
	     }
	  }
	  if(flag)
	  {
	  	printf("Both Arrays are eqaul");
	  }
	  else
	
	  {
	  	printf("Both Arrays are Not eqaul");
	  }
 return 0; 
	 
}
