//Q.3-Write a C program to display the addition of all elements of an array using pointer
#include<stdio.h>
int main()
{
	int a[5],i,add=0;
	int *ptr;
	ptr=a;
	
	printf("Enter the 5 elements of array:");//input array
	  for(i=0;i<5;i++)
	  {
	     scanf("%d",ptr+i);
	     
	  }
    printf("\n\nDisplay the all elements of Array:\n");//display array and addition logic
    for(i=0;i<5;i++)
    {
	 add=add+*(ptr+i);
	 
	 printf("%d\t",*(ptr+i));
	 } 
	 
	 printf("\n\nAddition of all elements of array is:%d",add);
	
	 
	 
	return 0; 
	 

}
