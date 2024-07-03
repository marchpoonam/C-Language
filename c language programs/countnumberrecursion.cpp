#include<stdio.h>
int main()
{
	void natural(int,int,int);//declaration
	int no,i=1,count=0;
	printf("Enter Number");
	scanf("%d",&no);
	natural(no,i,count);
	return 0;
	
}
void natural(int no,int i,int count)
{

	if(no!=0)
	{
		no=no/10;
		count++;
		i++;
		natural(no,i,count);
	}
	else
	{
		printf("Count of given Number =%d",count);
	}
}
