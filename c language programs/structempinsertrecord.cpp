#include<stdio.h>
#include<string.h>
int main()
{
	struct emp{
		int id;
		char name[10];
		int sal;
	};
	struct emp e[6];
	int i,index;
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
    printf("\nEnter Index where you can add this record:");
    scanf("%d",&index);
    int nid,nsal;
    char nname[10];
    printf("\n Enter Id,Name & Salary of new Employee:");
    scanf("%d%s%d",&nid,nname,&nsal);
    for(i=4;i>=index;i--)
    {
    	e[i+1]=e[i];
	}
	e[index].id=nid;
	strcpy(e[index].name,nname);
	e[index].sal=nsal;
	printf("\n*********New Employee Data**********\n\n");
	printf("Name\tAge\tTotal_Marks\n\n");
	for(i=0;i<6;i++)
	{
	printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
    } 
	return 0;
}
