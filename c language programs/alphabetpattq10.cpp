#include<stdio.h>

int main()
{
 int i,j;
  for(i=0;i<=4;i++)
   {
   	
   	for(j=0;j<=4;j++)
   	  {
   	  	if(i<=j)
   	  	{
			 
   	  	  printf(" %c ",i+65);
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
