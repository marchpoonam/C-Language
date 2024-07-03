//C program for sharing the address of memory locations in Union
 #include<stdio.h>
union student
{
	int roll_no;
	char name[10];
	float percentage;
};
int main()
{
	union student s1;
	printf("\nSize of student is %d",sizeof(s1));//10
	printf("\nAddress of Roll_No is:%u",&s1.roll_no);
	printf("\n Address of name is:%u",&s1.name);
	printf("\n Address of percentage is:%u",&s1.percentage);
	return 0;
}