#include<stdio.h>
int main()
{
	void natural(int,int,int);//declaration
	int no,i=1,count=0,sum=0;
	printf("Enter Number");
	scanf("%d",&no);
	natural(no,i,sum);
	return 0;
	
}
void natural(int no,int i,int sum)
{
int rem;
	if(no!=0)
	{
		rem=no%10;
		no=no/10;
		sum=sum+rem;
		i++;
		natural(no,i,sum);
	}
	else
	{
		printf("sum of digits=%d",sum);
	}
}
