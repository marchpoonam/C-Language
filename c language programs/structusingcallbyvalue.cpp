#include<stdio.h>
struct emp{
	int id;
	char name[10];
	int sal;
};
void show(struct emp);
int main()
{
	struct emp e;
	printf("\nenter Id,Name & Salary of employee");
	scanf("%d%s%d",&e.id,e.name,&e.sal);
	show(e);
	printf("\nIn main Employee Data:");
	printf("\n%d %s %d",e.id,e.name,e.sal);
	return 0;
}
void show(struct emp e)
{
	e.id=100;
	printf("\nIn function Employee Data\n");
	printf("\n%d %s %d",e.id,e.name,e.sal);
}