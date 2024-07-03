/*15) Write a program in C to find the ceiling in a sorted array?
Given a sorted array in ascending order and a value x, the ceiling of x is the smallest element in array
greater than or equal to x, and the floor is the greatest element smaller than or equal to x.
Expected Output :
The given array is : 1 3 4 7 8 9 9 10
The ceiling of 5 is: 7
*/
#include <stdio.h>       
int main()    
{              
    int a[10],i,n,x;
    int ceil,floor;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the %d array elements:",n);
    for(int i=0;i<n;i++)  
	{  //Initialize array 
      scanf("%d",&a[i]);    //1 2 4 5
    }
    printf("\nEnter the number which find Ceil & floor:");
    scanf("%d",&x);//3
     ceil=floor=-1;
    for(i=0;i<n;i++)
      {
      	
        if(a[i]==x)
         {
           	ceil=a[i];
           	floor=x;
           	break;
		 }
		else if(x<a[i])
		 {
	    	if(i==0)
			{
			  ceil=a[i];
			  floor=-1;
			 }						 
			else
			{					 
			 ceil=a[i];
			 floor=a[i-1];
			}
			break;
		 }
					 
	  }
		if(i==n)
		   {
		   	ceil=-1;
		   	floor=a[n-1];
		   }
		 printf("Ceil=%d And Floor=%d",ceil,floor);
					 
	 return 0;
					 
 }
