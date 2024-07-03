#include<stdio.h>

int main()
{
 int i,j,k;
  for(i=1;i<=5;i++)
   {
   k=5;
   	for(j=5;j>=1;j--)
   	  {
   	  	if(i>=j)
   	  	{
			 
   	  	printf(" %d ",k--);
   	    }
   	    else
   	    {
   	    	printf("   ");
	    }
     }
   	    
	  
   	printf("\n");
   		
   }		
	return 0;
}
