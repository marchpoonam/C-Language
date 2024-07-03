#include<stdio.h>
int main()
{
	void PrimeSeries(int);
	int no,limit;
	printf("Enter the limit:");
	scanf("%d",&limit);
	PrimeSeries(limit);

	return 0;
}
void PrimeSeries(int limit)
{
	int i=2,j;
	for(i=2;i<=limit;i++)
	{
		int count=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			printf("%d\n",i);
		}
	}
	
}
