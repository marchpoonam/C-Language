#include<stdio.h>
int main()
{
	void natural(int,int);//declaration
	int no,i=1,count=0,last;
	printf("Enter Number");
	scanf("%d",&no);
	
	natural(no,i);
	last=no%10;
	printf("\nLast digit=%d",last);
	return 0;
	
}
void natural(int no,int i)
{
  int first;
	if(no!=0)
	{
		first=no%10;
		no=no/10;
		i++;
		natural(no,i);
	}
	else
	{
		printf("first digit=%d",first);
		//printf("Last digit of given Number =%d",last);
	}
}
