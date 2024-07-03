#include<stdio.h>
int main()
{
	void prime(int);
	int no;
	do{
	
	printf("Enter the number:");
	scanf("%d",&no);
	prime(no);
}while(true);
	return 0;
}
void prime(int no)
{
	int i=2,flag=0;
	while(i<no)
	{
		if(no%i==0)
		{
		flag=1;
		break;
		}
		i++;
	}
	if(!flag)
	{
		printf("Prime number\n");
		
	}
	else
	{
		printf("Not prime number\n");
	}
}
