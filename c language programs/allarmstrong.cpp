#include<stdio.h>
#include<math.h>
int main()
{
 void ArmstrongSeries(int);
 int limit;
 printf("Enter the limit");
 scanf("%d",&limit);
 ArmstrongSeries(limit);
 return 0;
 
}
 void ArmstrongSeries(int limit)
 {
 	int i,temp,count=0,rem,p,sum=0;
	 for(i=1;i<=limit;i++)
	 {
	 	temp=i;
	 	sum=0;
	 	count=0;
	 	while(i!=0)
	 	{
	 		i=i/10;
	 		++count;
	 	}
	 	i=temp;
	 	while(temp!=0)
	 	{
	 		rem=temp%10;
	 		temp=temp/10;
	 		p=pow(rem,count);
	 		sum=sum+p;
		 }
		 if(sum==i)
		 {
		 	printf("%d\t",i);
		 	
		 }
	 }
 }
