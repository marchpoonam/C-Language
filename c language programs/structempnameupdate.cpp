//Write a c program to store the record of 5 Employees and Update name of employee having given ID.
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
	int i,sid;
	char upname[10];
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
    printf("\nEnter name to be updated:");
    scanf("%s",&upname);
    for(i=0;i<5;i++)
    {
    	if(sid==e[i].id)
    	{
    		strcpy(e[i].name,upname);
		}
	}
	printf("\n*********Employee Data**********\n\n");
		printf("Name\tAge\tTotal_Marks\n\n");
	for(i=0;i<5;i++)
	{
	
	printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
    } 
    return 0;
}
	
