//Write a c program to store the record of 5 Employees and search whether a employee with given id present or not.
#include<stdio.h>
int main()
{
	struct emp{
		int id;
		char name[10];
		int sal;
	};
	struct emp e[5];
	int i,sid;
	for(i=0;i<5;i++)
	{
	printf("Enter Id,Name &  Salary of Employee%d:\n",i+1);
	_flushall();
	scanf("%d%s%d",&e[i].id,e[i].name,&e[i].sal);
	}
	printf("\n*********Employee Data**********\n\n");
	printf("Name\tAge\tTotal_Marks\n\n");
	for(i=0;i<5;i++)
	{
	
	printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
    } 
    printf("\nEnter Id to be searched:");
    scanf("%d",&sid);
    int flag=0;
    for(i=0;i<5;i++)
    {
    	if(sid==e[i].id)
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
