//Create a structure named "Employee" to store employee details such as employee ID, name, and salary. 
//Write a program to input data for three employees, find the highest salary employee, and display their information.

#include<stdio.h>
int main()
{
	struct emp{
		int id;
		char name[10];
		int sal;
	}e1,e2,e3;
	printf("Enter Id,Name & Salary of 1st Employee:");
	scanf("%d %s %d",&e1.id,&e1.name,&e1.sal);
	printf("Enter Id,Name & Salary of 2nd Employee:");
	scanf("%d %s %d",&e2.id,&e2.name,&e2.sal);
	printf("Enter Id,Name & Salary of 3rd Employee:");
	scanf("%d %s %d",&e3.id,&e3.name,&e3.sal);
	printf("\nGiven Record:\n");
	printf("\n%d\t%s\t%d",e1.id,e1.name,e1.sal);
    printf("\n%d\t%s\t%d",e2.id,e2.name,e2.sal);
    printf("\n%d\t%s\t%d",e3.id,e3.name,e3.sal);

	if(e1.sal>e2.sal && e1.sal>e3.sal)
	{
		printf("\nHigest Salary:\t%s %d",e1.name,e1.sal);
	}
	else if(e2.sal>e1.sal && e2.sal>e3.sal)
	{
		printf("\nHigest Salary:\t%s %d",e2.name,e2.sal);
	}
	else if(e3.sal>e1.sal && e3.sal>e2.sal)
	{
		printf("\nHigest Salary:\t%s %d",e3.name,e3.sal);
	}
	else
	{
		printf("\nAll Have Same Salary");
	}
	return 0;
}
