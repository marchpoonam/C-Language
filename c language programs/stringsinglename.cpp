//write a c program to take input a name and display it
#include<stdio.h>
#include<string.h>
int main()
{
	char name[10];
	printf("\nEnter the Name:");
	//scanf("%s",name);
	gets(name);
	printf("\nDisplay name:%s",name);
	return 0;
	
}