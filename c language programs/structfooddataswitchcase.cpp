/*Design a structure named "Food Kitchen" to store the food details like food ID, food name, food category, food price, food availability. 
Use switch case  and input the 10 data of food from the user.
case 1: display the food details
case 2: search the food
case 3: update the food price
case 4: update the food availability
case 5: delete the food*/
#include<stdio.h>
#include<string.h>
int main()
{
	struct Food_Kichen{
		int id;
		char name[10];
		char category[10];
		int price;
		char availability[10];
		};
		
	struct Food_Kichen f[3];
	int i,ch,flag=0;
	for(i=0;i<3;i++)
	{
		printf("\nEnter Id,Name,Categoty,Price and Availability of Food%d:",i+1);
		_flushall();
		scanf("%d%s%s%d%s",&f[i].id,f[i].name,f[i].category,&f[i].price,f[i].availability);
	}
	 
     printf("\n1.Show All Food Details");
     printf("\n2.Search Food");
     printf("\n3.Update the Food Price");
     printf("\n5.Delete the Food");
     printf("\nEnter The choice:");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1:printf("\n*********Food Data**********\n\n");
                printf("Id\tName\tCategoty\tPrice\tAvailability of Food");
                for(i=0;i<3;i++)
	              {
	         	    printf("\n%d\t%s\t%s\t%d\t%s",f[i].id,f[i].name,f[i].category,f[i].price,f[i].availability);
	              }
	              break;
	    case 2:
	    	   char sfoodname[10];
	    	   printf("\nEnter the food name which you hsve searched:");
	    	   scanf("%s",sfoodname);
	    	   for(i=0;i<5;i++)
	    	   {
	    	   	if(strcmp(sfoodname,f[i].name)==0)
	    	   	{
	    	   	printf("\n%d\t%s\t%s\t%d\t%s",f[i].id,f[i].name,f[i].category,f[i].price,f[i].availability);
				   flag=1;	
				   }
			   }
			   if(flag==0)
                 {
		           printf("\nEmployee Not Present");
	             }
	             break;
	    case 3:int sid,uprice;
	           printf("\nEnter the Id which we want to update price:");
	           scanf("%d",&sid);
	           printf("\nEnter how much Price you added:");
	           scanf("%d",&uprice);
	           for(i=0;i<5;i++)
	           {
	           	if(sid==f[i].id)
	           	{
	           		f[i].price=uprice;
	           		printf("\n%d\t%s\t%s\t%d\t%s",f[i].id,f[i].name,f[i].category,f[i].price,f[i].availability);
	           		flag=1;
	              }
			   }
			   if(flag==0)
                 {
		           printf("\nEmployee Not Present");
	             }
	             break;
	    case 5:char sefoodname[10];
	            int count=0,j; 
	    	   printf("\nEnter the food name which you hsve searched:");
	    	   scanf("%s",sefoodname);
	    	   for(i=0;i<5;i++)
	    	   {
	    	   	if(strcmp(sefoodname,f[i].name)==0)
	    	   	{
	    	   		count++;
	    	   	for(j=i;j<5;j++)
	    	   	{
	    	   		f[j]=f[j+1];
	    	   		
				   }
				   }
			   }
			   printf("\n*********Food Data**********\n\n");
                printf("Id\tName\tCategoty\tPrice\tAvailability of Food");
			   for(i=0;i<=5-count;i++)
			   {
			   	printf("\n%d\t%s\t%s\t%d\t%s",f[i].id,f[i].name,f[i].category,f[i].price,f[i].availability);
			   }
			   
	        break;
       	default:printf("\nWrong Input");
	            break;
    }
    return 0;
}
	
