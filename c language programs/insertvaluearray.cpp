#include<stdio.h>
int main()
{
	int a[6],i,index,value;
	//for input array elements from user
	printf("Enter the 5 elements of array:");
	  for(i=0;i<5;i++)
	  {
	     scanf("%d",&a[i]);
	     
	  }
	  
	  //for display array elements
    printf("\n\nBefore inserting array elements are:\n");
    for(i=0;i<6;i++)
    {
	 
	 printf("\na[%d]-----%d\n",i,a[i]);
	 } 
	 
	 printf("\nEnter the Index:\n");
	 scanf("%d",&index);
	 printf("\nEnter the Element Value:\n");
	 scanf("%d",&value);
	 
	 for(i=4;i>=index;i--)
	 {
	 	a[i+1]=a[i];
	 }
	 a[index]=value;
	 
	 printf("\n\nAfter inserting array elements are:\n");
    for(i=0;i<6;i++)
    {
	 
	 printf("\na[%d]-----%d\n",i,a[i]);
	 } 
	 
	 return 0;
}
