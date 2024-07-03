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
	return 0;
}
void show(struct emp e)
{
	printf("\nEmployee Data\n");
	printf("\n%d %s %d",e.id,e.name,e.sal);
}