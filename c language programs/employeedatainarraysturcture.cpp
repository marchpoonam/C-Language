#include<stdio.h>
int main()
{
	struct Employee{
		int id;
		char name[50];
		int sal;
		char desg[50];
	};
	struct Employee emp[5];
	int i;
	for(i=0;i<5;i++)
	{
	
	printf("Enter Id,Name,Salary & Designation of Employee%d:\n",i);
	_flushall();
	scanf("%d%s%d%s",&emp[i].id,&emp[i].name,&emp[i].sal,&emp[i].desg);
	/*printf("Enter Name of Employee:\n");
	scanf("%s",&emp[i].name);
	printf("Enter Salary of Employee:\n");
	scanf("%d",&emp[i].sal);
	printf("Enter Designation of Employee:\n");
	scanf("%s",&emp[i].desg);*/
     }
	printf("\n*********Employee Data**********\n\n");
	printf("Id\tName\tSalary\tDesignation\n\n");
	for(i=0;i<5;i++)
	{
	
	printf("\n%d\t%s\t%d\t%s",emp[i].id,emp[i].name,emp[i].sal,emp[i].desg);
    } 
	return 0;
}
