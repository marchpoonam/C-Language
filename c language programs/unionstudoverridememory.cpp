#include<stdio.h>
#include<string.h>
union student
{
	int roll_no;
	char name[10];
	float percentage;
};
int main()
{
	union student s1;
	/*s1.roll_no=100;
	printf("\n Roll no:%d",s1.roll_no);
	strcpy(s1.name,"Abhijeet");
	printf("\n Name:%s",s1.name);*/
    s1.roll_no=100;
    strcpy(s1.name,"Abhijeet");
    	printf("\n Roll no:%d",s1.roll_no);
    s1.percentage=68.90;	
    printf("\n Name:%s",s1.name);
    printf("\n percentage:%f",s1.percentage);
    
		return 0;
}