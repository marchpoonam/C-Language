#include<stdio.h>
int main()
{
	int a[5],i,j,temp,len;
	len=sizeof(a)/sizeof(a[0]);
	
	//for input array elements from user
	printf("Enter the 5 elements of array:");
	  for(i=0;i<5;i++)
	  {
	     scanf("%d",&a[i]);
	     
	  }
	  
	  //for display array elements
    printf("\n\nBefore reversing Display the all elements of Array:\n");
    for(i=0;i<5;i++)
    {
	 
	 printf("%d\t",a[i]);
	
	 } 
	 
	 //for reversing the array
	 for(i=0;i<5;i++)
	 {
	  if(i<len)
       {
	  	temp=a[i];
	  	a[i]=a[len-1];
	  	a[len-1]=temp;
	  	len--;
	  }
    }
	 printf("\n\n\nDisplay Array in reverse order:\n");
	 for(i=0;i<5;i++)
	 {
	 	printf("%d\t",a[i]);
	 }
	
	return 0; 
	 
}
