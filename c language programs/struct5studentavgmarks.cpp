//Create a structure called "Student" with members name, age, and total marks. 
//Write a C program to input data for five students, display their information, and find the average of total marks
#include<stdio.h>
int main()
{
	struct Student{
		
		char name[50];
		int age;
		int total_marks;
	};
	struct Student s[5];
	int i,sum=0;
	float average;
	for(i=0;i<5;i++)
	{
	
	printf("Enter Name,Age &  Total_Marks of Student%d:\n",i+1);
	_flushall();
	scanf("%s%d%d",&s[i].name,&s[i].age,&s[i].total_marks);
	}
	printf("\n*********Student Data**********\n\n");
	printf("Name\tAge\tTotal_Marks\n\n");
	for(i=0;i<5;i++)
	{
	
	printf("\n%s\t%d\t%d",s[i].name,s[i].age,s[i].total_marks);
    } 
    for(i=0;i<5;i++)
	{
		sum=sum+s[i].total_marks;
	}
	average=(float)sum/5;
	printf("\nAverage of all Students Marks=%f",average); 
		  
	return 0;
}
