#include<stdio.h>
int main()
{
	struct emp{
		int id;
		char name[10];
		int sal;
		char desg[10];
	}e;
	printf("Enter Id of Employee:\n");
	scanf("%d",&e.id);
	printf("Enter Name of Employee:\n");
	scanf("%s",&e.name);
	printf("Enter Salary of Employee:\n");
	scanf("%d",&e.sal);
	printf("Enter Designation of Employee:\n");
	scanf("%s",&e.desg);
	printf("\n*********Employee Data**********\n\n");
	printf("Id\tName\tSalary\tDesignation\n\n");
	printf("%d\t%s\t%d\t%s",e.id,e.name,e.sal,e.desg);
	return 0;
}
