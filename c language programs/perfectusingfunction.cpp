#include<stdio.h>
int main()
{
	void Perfect(int);
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	Perfect(no);
		return 0;
}
void Perfect(int no)
{
	int i=1,
	sum=0;
	while(i<no)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==no)
	{
		printf("\n%d is Perfect Number",no);
	}
	else
	{
	  printf("\n%d is Not Perfect Number",no);	
	}
	
}
