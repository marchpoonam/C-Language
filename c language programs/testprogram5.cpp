#include<stdio.h>

int main()
{
 int i,j,n,m,k;
 printf("Enter the rows:");
 scanf("%d",&n);
 printf("Enter the column:");
 scanf("%d",&m);
  for(i=0;i<=n-1;i++)
   {
   	 for(j=0;j<=i;j++)
   	 {
   			
   	 	printf("%c",j+65);
   	 
	 }
	 for(j=i+1;j<=i;j++)
   	 {
   			
   	 	printf("%c",j+63);
   	 
	 }
	 
	 printf("\n");
}
return 0;
}
