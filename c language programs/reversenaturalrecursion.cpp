#include<stdio.h>
int main()
{
	void natural(int,int);//declaration
	int limit,i=1;
	printf("Enter limit");
	scanf("%d",&limit);
	natural(limit,i);
	return 0;
	
}
void natural(int limit,int i)
{

	if(limit!=0)
	{
		printf("%d\t",limit);
		limit--;
		natural(limit,i);
	}
	else
	{
		printf("End");
	}
}
