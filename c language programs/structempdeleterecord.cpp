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
	int i,did;
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
    printf("\nEnter deleted Id:");
    scanf("%d",&did);
    int count=0,j;
    for(i=0;i<5;i++)
    {
    	if(did==e[i].id)
    	{
    	 count++; 
		 for(j=i;j<5;j++)
    	  {
    	  	e[j]=e[j+1];
    	  	
		  }
		}
	}
	if(count==0)
	{
		printf("\nEmployee Not Present");
	}
		printf("\n*********Employee Data**********\n\n");
	printf("Name\tAge\tTotal_Marks\n\n");
	for(i=0;i<=5-count;i++)
	{
	  	printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);	
	}
	
	return 0;
}
