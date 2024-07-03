//Design a structure named "Car" to store details like car ID, model, and rental rate per day. Write a C program to input data for three cars, 
//calculate the total rental cost for a specified number of days,and display the results.
#include<stdio.h>
int main()
{
	struct car{
		int id;
		char model[10];
		int rate;
		};
	
	struct car c[3];
	int i,days,Rental_Cost;
		for(i=0;i<3;i++)
	{
	   printf("Enter Id,Model & Rent per day of Car%d:\n",i+1);
	   _flushall();
	   scanf("%d%s%d",&c[i].id,c[i].model,&c[i].rate);
	}
	printf("\n*********Car Information**********\n\n");
	printf("ID\tModel\tRate per Day\n\n");
	for(i=0;i<3;i++)
	{
	  printf("\n%d\t%s\t%d",c[i].id,c[i].model,c[i].rate);
    } 
    printf("\nEnter how many days you want this car for rent:");
    scanf("%d",&days);
    for(i=0;i<3;i++)
    {
    	Rental_Cost=c[i].rate*days;
    	
    	printf("\nId=%d\tModel=%s\tTotal Rental Cost for Car=%d",c[i].id,c[i].model,Rental_Cost);
    	
  	}
  	return 0;
}
