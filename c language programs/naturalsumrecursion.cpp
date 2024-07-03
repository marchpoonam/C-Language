#include<stdio.h>
int main()
{
	void NaturalSum(int,int,int);//declaration
	int limit,i=1,sum=0;
	printf("Enter limit:");
	scanf("%d",&limit);
	NaturalSum(limit,i,sum);
	return 0;
	
}
void NaturalSum(int limit,int i,int sum)
{

	if(i<=limit)
	{
	   sum=sum+i;
	   i++;
		NaturalSum(limit,i,sum);
	}
	else
	{
	  printf("Sum of 1st %d Natural Numbers=%d\t",limit,sum);
	}
}
