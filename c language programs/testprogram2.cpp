#include<stdio.h>

int main()
{
 int i,j,n,m,s,k;
 printf("Enter the rows:");
 scanf("%d",&n);
 printf("Enter the column:");
 scanf("%d",&m);
 printf("Enter the space:");
 scanf("%d",&s);
  for(i=1;i<=n;i++)
   {
   	
   	  for(k=s;k>=i;k--)
   	    {
   		  printf(" ");
   		
	    }
	   
	  for(j=1;j<=i;j++)
	   {
		printf("%d ",i);
     	}
	printf("\n");
	   
  }
  return 0;
}
