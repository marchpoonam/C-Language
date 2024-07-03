/*#include<stdio.h>
int main()
{
	
	int a=100,b=200;
	printf("Address of a=%u,b=%u",&a,&b);
	return 0;
	
}*/
/*-----------------------------------------------
#include<stdio.h>
int main()
{
	
	int a=100,*ptr;
	ptr=&a;
	printf("ptr=%u",ptr);
	printf("\nValue of a using pointer=%d",*ptr);
	return 0;
}
--------------------------------------------------------*/
/*#include<stdio.h>
int main()
{
	
	int b=500,*ptr;
	ptr=&b;
	printf("ptr=%u",ptr);
	printf("\nValue of b using pointer=%d",*ptr);
	return 0;
}
-----------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
	
	int a=100,*ptr;
	ptr=&a;
	printf("\nptr=%u",ptr);
	printf("\nValue of a using pointer=%d",*ptr);
	*ptr=*ptr+100;
	printf("\nptr=%u",ptr);
	printf("\nValue of a using pointer=%d",*ptr);
	return 0;
}
//----------------------------------------------------------------------------


