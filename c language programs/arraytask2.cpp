#

include<stdio.h>
int main()
{
	int arr[5],i,sum=0;
	printf("Enter the 5 elements of array:");
	  for(i=0;i<5;i++)
	  {
	     scanf("%d",&arr[i]);
	     
	  }
    printf("\n\nDisplay the all elements of Array:\n");
    for(i=0;i<5;i++)
    {
	 sum=sum+arr[i];
	 
	 printf("%d\t",arr[i]);
	 } 
	 
	 printf("\n\nSum of all elements of array is:%d",sum);
	
	 
	 
	return 0; 
	 

}
