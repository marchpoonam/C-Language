#include<stdio.h>
int main()
{
	void natural(int,int);//declaration
	int i=65,limit=90;
	//printf("Enter limit");
	//scanf("%d",&limit);
	printf("\nAll Alphabets:\t");
	natural(limit,i);
	return 0;
	
}

void natural(int limit,int i)
{
 
	if(i<=limit)
	{
		printf("%c\t",i);
		i++;
		natural(limit,i);
	}
	else
	{
		printf("End");
	}
}
