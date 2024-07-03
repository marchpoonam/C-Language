#include<stdio.h>

int main()
{
 int no,choice,count=0,sum=0,rem,rev=0;
 printf("Enter the number:");
 scanf("%d",&no);
 printf("\n1.Sum of even digits\n2.count number of digits\n3.Reverse the number\n");
 printf("Enter the choice:");
 scanf("%d",&choice);
 switch(choice)
 {
 	case 1:
	        
			while(no!=0)
 	        {
 	        	rem=no%10;
 	        	no=no/10;
		
			
			 if(rem%2!=0)
			 {
			 	sum=sum+rem;
			 }
		}
         	
			 printf("Sum of even didgit=%d",sum);
			 
			 break;
			 
    case 2:while(no!=0)
             {
 	        	no=no/10;
 	        	count++;
			 }
			 printf("Number of digits=%d",count);
			 break;
			 
	case 3:   
	          while(no!=0)
	       {
	       	rem=no%10;
	       	rev=rev*10+rem;
	       	no=no/10;
	       }
	       printf("Reverse number=%d",rev);
	       break;
	       
	       default:printf("Invalid Input");
	       
 }
   	return 0;         
 }
