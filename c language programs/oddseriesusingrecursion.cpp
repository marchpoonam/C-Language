#include<stdio.h>
int main()
{
	void OddSeries(int,int);//declaration
	int limit,i=1;
	printf("Enter limit:");
	scanf("%d",&limit);
	OddSeries(limit,i);
	return 0;
	
}
void OddSeries(int limit,int i)
{
   if(i<=limit)
	  {
		if(i%2!=0)
		{
		printf("%d\t",i);
		}
		i++;    
		OddSeries(limit,i);
	}
	else
	{
		printf("End");
	}
}
