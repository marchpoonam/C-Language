#include<stdio.h>
int main()
{ 
  int i,j,k;
  
   for(i=5;i>=1;i--)
     
     {
     	for(k=4;k>=i;k--)
     	 {
     	 	printf(" ");
     	 }
     	 for(j=1;j<=i;j++)
     	 {
     	 	if(i==5 || j==1 || i==j)
     	 	{
			  
     	 	printf("*");
     	    }
     	    else
     	    {
     	    	printf(" ");
			 }
		  
		  }
		  printf("\n");
    }
	 return 0;
}
