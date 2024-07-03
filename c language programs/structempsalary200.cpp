//Write a c program to store the record of 5 Employees and Update Salary of each Emploee by 200.
#include<stdio.h>
int main()
{
	struct emp{
		int id;
		char name[10];
		int sal;
	};
	struct emp e[5];
	int i;
	for(i=0;i<5;i++)
	{
	printf("Enter Id,Name &  Salary of Employee%d:\n",i+1);
	_flushall();
	scanf("%d%s%d",&e[i].id,e[i].name,&e[i].sal);
	}
	printf("\n*********Employee Data**********\n\n");
	printf("Id\tName\tSalary\n\n");
	for(i=0;i<5;i++)
	{
	
	printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
    } 
   for(i=0;i<5;i++)
   {
   	e[i].sal=e[i].sal+200;
    }
    	printf("\n*********Employee Data**********\n\n");
	printf("Id\tName\tSalary\n\n");
	for(i=0;i<5;i++)
	{
	
	printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
    } 
    return 0;
}
	
