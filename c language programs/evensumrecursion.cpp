#include<stdio.h>
int main()
{
	void EvenSeriesSum(int,int,int);//declaration
	int limit,i=1,sum=0;
	printf("Enter limit:");
	scanf("%d",&limit);
	EvenSeriesSum(limit,i,sum);
	return 0;
	
}
void EvenSeriesSum(int limit,int i,int sum)
{
   if(i<=limit)
	  {
		if(i%2==0)
		{
		sum=sum+i;
		}
		i++;
		EvenSeriesSum(limit,i,sum);	
      }
	else
	{
	  printf("Sum of 1st %d Even Numbers=%d\t",limit,sum);
	}
}
