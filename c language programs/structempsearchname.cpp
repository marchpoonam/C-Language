//Write a c program to store the record of 5 Employees and Search whether a employee with given name is present or not.
#include<stdio.h>
#include<string.h>
int main()
{
	struct emp{
		int id;
		char name[10];
		int sal;
	};
	struct emp e[5];
	int i;
	char sname[10];
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
    printf("\nEnter Name to be searched:");
    scanf("%s",sname);
    int flag=0;
    for(i=0;i<5;i++)
    {
    	if(strcmp(sname,e[i].name)==0)
    	{
    		printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("\nEmployee Not Present");
	}
	return 0;
}
