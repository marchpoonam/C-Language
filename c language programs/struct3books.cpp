//Create a structure named Book to store book details like title, author, and price. 
//Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information.
#include<stdio.h>
int main()
{
	struct Book{
		
		char title[50];
		char author[50];
		int price;
	};
	struct Book B[3];
	int i,sum=0;

	for(i=0;i<3;i++)
	{
	   printf("Enter Title,Author & Price of Book%d:\n",i+1);
	   _flushall();
	   scanf("%s%s%d",&B[i].title,&B[i].author,&B[i].price);
	}
	printf("\n*********Book Information**********\n\n");
	printf("Title\tAuthor\tPrice\n\n");
	for(i=0;i<3;i++)
	{
	  printf("\n%s\t%d\t%d",B[i].title,B[i].author,B[i].price);
    } 
    	int lowest_price=B[0].price;
    	int index=0;
    for(i=0;i<3;i++)
    {
    	if(lowest_price >B[i].price)
    	{
    		lowest_price=B[i].price;
    		index=i;
		}
	}
		printf("\nLowest Salary Employee Details:\n");
		printf("Title=%s\nAuthor=%s\nPrice=%d",B[index].title,B[index].author,B[index].price);
		
		
    	
	
    return 0;
}
    
