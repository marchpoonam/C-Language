#include<stdio.h>
#include<math.h>
int main()
{
	void Armstrong(int);
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	Armstrong(no);
	return 0;
}
void Armstrong(int no)
{
	int rem,count=0,sum=0,p;
	int temp=no;
	while(no!=0)
	{
	    no=no/10;
		++count;
	}
    no=temp;
    while(no!=0)
    {
    	rem=no%10;
    	no=no/10;
    	p=pow(rem,count);
    	sum=sum+p;
	}
	if(sum==temp)
	{
	  printf("%d is Armstrong Number",temp);
	}
	else
	{
	  printf("%d is Not Armstrong Number",temp);
	}
}
