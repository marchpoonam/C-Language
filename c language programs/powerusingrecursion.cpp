#include<stdio.h>
int p=1;
int main()
{
	void power(int,int);
	int b,i;
	printf("Enter the base and index");
	scanf("%d%d",&b,&i);
	power(b,i);
	return 0;
}
	void power(int b,int i)
	{
		
		if(i!=0)
		{
			p=p*b;
			power(b,i-1);
		}
		else
		{
			printf("Power of given number=%d",p);
		}
	}
