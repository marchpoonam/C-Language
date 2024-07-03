#include<stdio.h>
int main()
{
	void Reverse(int);
	int Palindrome(int);
	int SumOfDigit(int);
	void PowerOfNumber(int,int);

	int no,choice,result;
	printf("\nEnter the number:");
	scanf("%d",&no);
	printf("\n1.Reverse Number");
    printf("\n2.Palindrome Number");
	printf("\n3.Sum of Digits\n");
	printf("\n4.Power of Number");
	printf("\nEnter your choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:Reverse(no);
		       break;
	    case 2:result=Palindrome(no);
	           if(result==1)
	           {
	         	printf("%d Number is Palindrome Number",no);
			   }

               else
               {
                printf("%d Number is Not Palindrome Number",no);	
			   }
			   break;
		case 3:SumOfDigit(no);
		        break;
		case 4: 
		int index;
		printf("Enter the index:");
		        scanf("%d",&index);
		        
				PowerOfNumber(no,index);
		        break;
		default:printf("Wrong Input");
		        break; 
		            	   
	}
  
  return 0;
}
	void Reverse(int no)
	{ 
	int rem,rev=0;
	while(no!=0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	printf("\nReverse of Given number is=%d",rev);
	
	}
	int Palindrome(int no)
	{
	 int rem,rev=0,temp;
	 temp=no;
	while(no!=0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	if(rev==temp)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	}
	int SumOfDigit(int no)
	{
		 int rem,sum=0;
	 
	while(no!=0)
	{
		rem=no%10;
		sum=sum+rem;
		no=no/10;
	}
	printf("\n Sum Of all didgits=%d",sum);
	}
	void PowerOfNumber(int no,int index)
	{
		int power=1,i;
		
		       
		        for(i=1;i<=index;i++)
		        {
		        	power=power*no;
				}
				printf("\nPower of given number is=%d",power);
	}
