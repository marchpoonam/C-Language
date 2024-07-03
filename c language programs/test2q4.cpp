//Q.4-Write a C program to display fibbonacci series up to n number using function recursion
#include<stdio.h>
int main()
{
 void fib(int,int,int);
 int a=0,b=1,c,limit,i;
 printf("Enter the limit");
 scanf("%d",&limit);
 fib(a,b,limit);
 return 0;
}
  void fib(int a,int b,int limit)
  {
  	int c;
  	if(limit>0)
  	{
  		a=b;
  		b=c;
  		c=a+b;
  		fib(a,b,limit++);
  	}
  	else{
	  
  		printf("Fibbonacci series:%d,%d,%d",a,b,c);
	  }
  }

 
