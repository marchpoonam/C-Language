#include<stdio.h>
struct emp{
	int id;
	char name[10];
	int sal;
};
void show(struct emp*);
int main()
{
	struct emp e[5];
	int i;
	for(i=0;i<5;i++)
	{
	  printf("\nenter Id,Name & Salary of employee%d:\n",i+1);
	  _flushall();
	   scanf("%d%s%d",&e[i].id,e[i].name,&e[i].sal);
    }
	show(e);
	return 0;
}
void show(struct emp *e)
{
	int i;
	printf("\nIn Employee Data:\n");
	printf("\nId\tName\tSalary\n");
	for(i=0;i<5;i++)
	{
	  printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
    }
}