#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	struct emp{
		int id;
		char name[10];
		int sal;
	};
	int size,i;
	int len=printf("\n Length=%d",sizeof(struct emp));
	printf("\n Enter the number of Enployees:");
	scanf("%d",&size);
	struct emp *e=(struct emp*)malloc(sizeof(struct emp)*size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter Id,Name &  Salary of Employee%d:\n",i+1);
	_flushall();
	scanf("%d%s%d",&e[i].id,e[i].name,&e[i].sal);
	}
		printf("\n*********Employee Data**********\n\n");
	printf("Id\tName\tSalary\n\n");
	for(i=0;i<size;i++)
	{
	printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
    } 

	return 0;
}