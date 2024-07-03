#include<stdio.h>
int main()
{
	int calAdd(int,int),calSub(int,int),calMul(int,int),calDiv(int,int),calMod(int,int);
	int n1,n2,choice;
	printf("\nEnter the two numbers:");
	scanf("%d%d",&n1,&n2);
	
	printf("\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Modulus");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:calAdd(n1,n2);
		       break;
		       
		case 2:calSub(n1,n2);
		       break;
		case 3:calMul(n1,n2);
		       break; 
		case 4:calDiv(n1,n2);
		       break;
	    case 5:calMod(n1,n2);
		       break;  
		default:printf("Invalid Input");  
		        break;  
	}
	return 0;
}
 int calAdd(int n1,int n2)
 {
 	int result;
 	result=n1+n2;
 	printf("\nAddition=%d",result);

 }
 int calSub(int n1,int n2)
 {
 	int result;
 	result=n1-n2;
 	printf("\nSubstraction=%d",result);

 }
 int calMul(int n1,int n2)
 {
 	int result;
 	result=n1*n2;
 	printf("\nMultiplication=%d",result);

 }
 int calDiv(int n1,int n2)
 {
 	int result;
 	result=n1/n2;
 	printf("\nDivision=%d",result);

 }
 int calMod(int n1,int n2)
 {
 	int result;
 	result=n1%n2;
 	printf("\nModulous=%d",result);

 }
