#include<stdio.h>
int main()
{
	void OddSeriesSum(int,int,int);//declaration
	int limit,i=1,sum=0;
	printf("Enter limit:");
	scanf("%d",&limit);
	OddSeriesSum(limit,i,sum);
	return 0;
	
}
void OddSeriesSum(int limit,int i,int sum)
{
   if(i<=limit)
	  {
		if(i%2!=0)
		{
		sum=sum+i;
		}
		i++;    
		OddSeriesSum(limit,i,sum);
	}
	else
	{
	 printf("Sum of 1st %d Odd Numbers=%d\t",limit,sum);
	}
}
