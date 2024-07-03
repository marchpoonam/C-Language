#include<stdio.h>

int main()
{
 int s1,s2,s3;
 printf("Enter the side1:");
 scanf("%d",&s1);
 printf("Enter the side2:");
 scanf("%d",&s2);
 printf("Enter the side3:");
 scanf("%d",&s3);
 if(s1==s2 && s2==s3)
 {
 	printf("Triangle is Eqilateral");
 	
 }
  else if(s1==s2 || s2==s3 || s1==s3)
 {
 	printf("Triangle is Isoscale");
 	
 }
 else
 {
 	printf("Triangle is Scalene");
 }
 return 0;
}
