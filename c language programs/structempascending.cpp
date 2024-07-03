#include<stdio.h>
#include<string.h>
int main()
{
	struct emp{
		int id;
		char name[10];
		int sal;
	};
	struct emp e[5],temp;
	int i,j;
	for(i=0;i<5;i++)
	{
	printf("Enter Id,Name &  Salary of Employee%d:\n",i+1);
	_flushall();
	scanf("%d%s%d",&e[i].id,e[i].name,&e[i].sal);
	}
	printf("\n*********Employee Data**********\n");
	printf("Name\tAge\tTotal_Marks\n\n");
	for(i=0;i<5;i++)
	{
	printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
    } 
     for(i=0;i<5;i++)
     {
     	for(j=i+1;j<5;j++)
     	{
     		if(e[i].sal>e[j].sal)
     		{
     		  temp=e[i];
			  e[i]=e[j];
			  e[j]=temp;	
			}
	    }
	 }
	 	printf("\n*********Sorted Employee Data**********\n");
	printf("Name\tAge\tTotal_Marks\n\n");
	for(i=0;i<5;i++)
	{
	printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
    } 
    
    return 0;
}
