
#include<stdio.h>
int main()
{	int limit = 50000;
		for(int i=1;i<limit;i++)
		{	int sum=0;
			int temp = i ; // 145		
			while(temp!=0)//0!=0
			{	int fact=1;
				int rem = temp%10;// 1 4 5
				for(int j=1;j<=rem;j++)
				{
					fact = fact*j; // 1	
				}
				sum = sum + fact; // 120 + 24 + 1
				temp /=10;//0 1 4 5
			}
			if(sum == i)
			{printf("Strong Number:%d \n",i);	
			}	
		}
}

