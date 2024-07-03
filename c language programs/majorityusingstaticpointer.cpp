//WAP in C to find the majority of an array

#include<stdio.h>
int main()
{
    int a[5],i,j,length,*ptr,flag=0;
	   length=sizeof(a)/sizeof(a[0]);
	   ptr=a;
	   printf("Length of Array=%d",length);
	   //Input array from User fixed 5 values of array size called as static
	   printf("\nEnter five values in array:\n");
	   for(i=0;i<length;i++)
	   { 
	     scanf("%d",(ptr+i));// 1 2 1 1 2 
	     
	   }    
	   //Display the array
	   printf("\n Display array:\n");
	   for(i=0;i<length;i++)
	   { 
	     printf("%d\t",*(ptr+i));
	   }    
	   int majority=length/2;
	   
	   for(i=0;i<length;i++)
	   {
	   	
	   		int count=1;// each value are count start at 1 value
		         for(int j=(i+1);j<length;j++)
	              	{
				      if(*(ptr+i)==*(ptr+j)) //2,4,4,4,2
			            	{
					         ++count;//3
			              	}
	              	}
	        if(count>majority)//3>2
		      {
			    printf("\nMejority Element:%d ------->%d",*(ptr+i),count);
			    flag=1;
			    break;
				}
	   }
	   
	   	if(flag==0)
         {            
	      printf("\nNo Mejority Element in this Array");
         }

	return 0;
}
