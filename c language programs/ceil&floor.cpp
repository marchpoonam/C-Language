
/*16). Write a program in C to find the Floor and Ceil of the number 0 to 10 from a sroted array.
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
Number: 9 ceiling is: 9 floo
Sanjay Ghisadi
*/
#include<stdio.h> 
 
int main() 
{
 int c,f,a[5],i,n;
 
 printf("\n Enter 5 elements in array");
 for(i=0;i<5;i++)
 { 	 
scanf("%d",&a[i]); 
} 	
printf("\n Enter a number to find the ceiling and fllor");
 	scanf("%d",&n); for(i=0;i<5;i++) { if(a[i]==n) 
{ 	 
f=a[i];
 	 c=a[i];
 	 break; 
} 
if(a[0]>n)
 {
 	 c=a[0];
 	 f=-1; 
	 break;
 }
 if(a[4]<n)
 { 	
 c=-1; 
	 f=a[4];
 	 break; 
}
 if(a[i]<n&&a[i+1]>n)
 {
 	 c=a[i+1]; 	 f=a[i];
 	 break; 
}
 }
 printf("\n Ceiling=%d\n",f);
return 0;
}
