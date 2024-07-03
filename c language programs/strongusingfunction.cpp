#include<stdio.h>
int main()
{
	void Strong(int);
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	Strong(no);
	return 0;
}
void Strong(int no)
{
	int temp,rem,sum=0;
	temp=no;
	while(no!=0)
	{
		rem=no%10;
		int f=1,i=1;
		while(i<=rem)
		{
			f=f*i;
			i++;
		}
		sum=sum+f;
		no=no/10;
	}
	if(sum==temp)
	{
		printf("%d is Strong Number",temp);
	}
	else
	{
		printf("%d is Not Strong Number",temp);
	}
}
