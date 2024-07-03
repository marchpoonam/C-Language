#include<stdio.h>
int main()
{
	int a[5],*p,i;
	p=a;
	printf("Enter the values in array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",(p+i));
	}
	printf("Display values:");
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(p+i));
	}
	return 0;
}
