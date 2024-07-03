//Write a C program to take name as input and display it character by character
#include<stdio.h>
#include<string.h>
int main()
{
	char name[10];
	int i;
	printf("\nEnter the Name:");
	gets(name);
	printf("\nDisplay name:");
	for(i=0;name[i]!='\0';i++)
	{
		printf("\n %c",name[i]);
	}
	return 0;
	
}