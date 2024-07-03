//Wr
#include<stdio.h>
int main()
{
	struct FoodShop{
		int food_id;
		char food_name[50];
		int food_price;
		
	};
	struct FoodShop food[3];
	int i,ch;
	for(i=0;i<3;i++)
	{
	
	printf("Enter Id,Name,Price of Food%d:\n",i+1);
	_flushall();
	scanf("%d%s%d",&food[i].food_id,&food[i].food_name,&food[i].food_price);
	
     }
    
     printf("\n1.Show All Food Details");
     printf("\n2.Calculate Total Price");
      printf("\nEnter The choice:");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:printf("\n*********Employee Data**********\n\n");
	        printf("Id\tName\tPrice\n\n");
	        for(i=0;i<3;i++)
	         {
	            printf("\n%d\t%s\t%d",food[i].food_id,food[i].food_name,food[i].food_price);
             } 
             break;
    case 2:int total_price=0;
	       
           for(i=0;i<3;i++)
           {
           	total_price=total_price+food[i].food_price;
		   }
		   printf("\nTotal price of all foods=%d",total_price);
		   break;
		   
	default:printf("\nWrong Input");
	        break;
}
	return 0;
}
