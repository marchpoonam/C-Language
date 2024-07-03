#include<stdio.h>
int main()
{
	int calOfArea(int);
	int calAreaOfRactangle(int,int);
	int calAreaOfTringle(int);
	int calAreaOfQuadrilateral(int,int);
	int calAreaOfCircumference(int);
	int choice;
     
	
	printf("\n1.Area Of Circle\n2.Area Of Rectangle\n3.Area Of Triangle\n4.Area Of qaudrilateral\n5.calAreaOfCircumference");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:  int r;
		          printf("Enter the radius:");
	              scanf("%d",&r);
		          calOfArea(r);
		          break;
		       
		case 2:  int l,b;
		         printf("Enter the length and breadth:");
		         scanf("%d%d",&l,&b);
		         calAreaOfRectangle(l,b);
		         break;
		case 3:  int b,h;
		         printf("Enter the base & height:");
				 scanf("%d%d",&b,&h);
				 calAreaOftriangle(b,h);
		       break; 
		case 4:int b,h;
		         printf("Enter the base & height:");
				 scanf("%d%d",&b,&h);
				 calAreaOfQuadrilateral(b,h);
		       break;
	    case 5:
		        int r;
		         printf("Enter the radius:");
				 scanf("%d",&r);
				 calAreaOfCircumference(r);
		        break;  
		default:printf("Invalid Input");  
		        break;  
	}
	return 0;
}
int calOfArea(int r)
{
	float area;
	area=3.14*r*r;
	printf("\nArea Of Circle=%f",area);
	
}
	int calAreaOfRactangle(int l,int b)
	{
		float area;
		area=l*b;
		printf("\nArea of Rectangle=%f",area);
	}
	int calAreaOfTringle(int b,int h)
	{
		float area;
		area=1/2*b*h;
		printf("\nArea of Triangle=%f",area);
	}
	int calAreaOfQuadrilateral(int b,int h)
	{
		float area;
		area=b*h;
		printf("\nArea of Quadrilateral=%f",area);
	}
	int calAreaOfCircumference(int r)
	{
		float circumference;
		circumference=2*3.14*r;
		printf("circumference of Circle=%f",circumference);
		
	}
