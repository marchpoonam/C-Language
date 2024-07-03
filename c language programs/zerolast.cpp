
/*23) Write a program in C to move all zeroes to the end of a given array.
Expected Output :
The given array is : 2 5 7 0 4 0 7 -5 8 0
The new array is:
2 5 7 8 4 -5 7 0 0 0*/
#include<stdio.h>
int main()
{
	int a[5],i,j,b[5],k=0;
	printf("Enter the array values:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]); 
	}
	for(i=0;i<5;i++)
	{
		if(a[i]!=0)  
		{
			b[k++]=a[i]; 
		}
	}
	while(k<5)
	{
		b[k++]=0;  
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",b[i]);
	}
	return 0;
}
