#include<stdio.h>

int main()
{
 int no,limit,i,f,temp,rem,sum=0;
 printf("Enter the limit");
 scanf("%d",&limit);
 
 for(i=1;i<=limit;i++)
 {
 temp=no;
 while(no!=0)
 {
 	rem=no%10;
 	f=1;
 	i=1;
 	while(i<=rem)
 	{
 		f=f*i;
 		i++;
	 }
	 sum=sum+f;
	 no=no/10;
 }
}
 
 if(sum==temp)
 {
  printf("%d",temp);
  }
 
  return 0;
}
