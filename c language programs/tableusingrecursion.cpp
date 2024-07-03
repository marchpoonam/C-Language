#include<stdio.h>
int count=0;
int main()
{
 void ShowTable(int);
 int i=10,no=5;
 showTable(i);
 return 0;
}
ShowTable(int i)
{
	if(i!=0)
	{
		table=no*i;
		printf("Table=%d\n",table);
		ShowTable(i-1);
	}
}
