#include<stdio.h>
int main()
{
	void Duck(int);
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	Duck(no);
		return 0;
}
void Duck(int no)
{
	int rem,flag=0,temp;
	temp=no;
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		if(rem==0)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("%d is duck Number",temp);
	}
	else
	{
		printf("%d is Not duck Number",temp);
	}
}
