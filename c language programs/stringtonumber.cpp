//Write a c program to covert given string into number
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[50];
	printf("\nEnter any string:");//"576"
	gets(str);
	int num=atoi(str);
	printf("\nCoversion of string into number:%d",num);//576
	printf("\nCoversion of string into number:%d",num+1);//576+1=577
	/*char ch;
	printf("character:");
	scanf("%c",&ch);
	printf("ascii=%d",ch);*/
	
	return 0;
}