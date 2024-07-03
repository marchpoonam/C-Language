#include<stdio.h>
int main()
{
	void table(int,int);//declaration
	int no,count=0;
	printf("Enter number:");
	scanf("%d",&no);
	table(no,count);
	return 0;
	
}
void table(int no,int count)
{
	
	if(count<10)
	{
		++count;
		printf("%d\n",count*no);
		table(no,count);
	}
	else
	{
		printf("\nEND");
	}
}
