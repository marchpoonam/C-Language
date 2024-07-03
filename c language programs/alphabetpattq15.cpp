#include<stdio.h>

int main()
{
 int i,j;
  for(i=0;i<=4;i++)
   {
   	 
   	for(j=5;j>=i;j--)
   	  {
   	  	if(j>i)
   	  	{
			 
   	  	  printf(" %c ",i+65);
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
