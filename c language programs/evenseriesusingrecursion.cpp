#include<stdio.h>
int main()
{
	void EvenSeries(int,int);//declaration
	int limit,i=1;
	printf("Enter limit");
	scanf("%d",&limit);
	EvenSeries(limit,i);
	return 0;
	
}
void EvenSeries(int limit,int i)
{

	if(i<=limit)
	{
		if(i%2==0)
		{
		printf("%d\t",i);
		     
	
		}
		i++;
		EvenSeries(limit,i);	
	}
	else
	{
		printf("End");
	}
}
