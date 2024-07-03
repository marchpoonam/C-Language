
/*
16). Write a program in C to find the Floor and Ceil of the number 0 to 10 from a sroted array.
Expected Output :
The given array is : 1 3 5 7 8 9
Number: 0 ceiling is: 1 floor is: -1
Number: 1 ceiling is: 1 floor is: 1
Number: 2 ceiling is: 3 floor is: 1
Number: 3 ceiling is: 3 floor is: 3
Number: 4 ceiling is: 5 floor is: 3
Number: 5 ceiling is: 5 floor is: 5
Number: 6 ceiling is: 7 floor is: 5
Number: 7 ceiling is: 7 floor is: 7
Number: 8 ceiling is: 8 floor is: 8
Number: 9 ceiling is: 9 floor is: 9
Number: 10 ceiling is: -1 floor is: 9

*/
#include <stdio.h>
int main() {
	
	int arr[5];
	int i;
	int ceil,floor;
	int no;
	printf("Enter 5 Array elements in sorted order");
	for(i=0;i<5;i++)
	{	
	scanf("%d",&arr[i]);
    }
    
 for(no=0;no<=10;no++)
 {
 
      ceil=floor=-1;
       
        for(i=0;i<5;i++)
           {
           	ceil=arr[i];
           	  if(arr[i]==no)
           	    {
           	    	//ceil=arr[i];
           	    	floor=no;
           	    	break;
				   }
				   else if(no<arr[i])//1 2 4 5
				   
				     {
				     	if(i==0)
				     	{
				     	//	ceil=arr[i];
				     		floor=-1;
						 }						 
						 else
						 {						 
				     	 //ceil=arr[i];
				     	 floor=arr[i-1];
				         }
				     	break;
					 }
					 
		   }
		   if(i==5)
		   {
		   	ceil=-1;
		   	floor=arr[4];
		   }
		   printf("\n no= %d ceil =%d and floor =%d",no,ceil,floor);
	}
	return 0;
}

