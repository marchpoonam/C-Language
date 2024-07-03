//WAP in C to find the majority of an array using dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,size,*ptr,flag=0;
	   printf("Enter the size of an array:");
	   scanf("%d",&size);
	   ptr=(int *)malloc(sizeof(int)*size);
	   //Input array from User of any size called as dynamic array
	   printf("\nEnter %d values in array:",size);
	   for(i=0;i<size;i++)
	   { 
	     scanf("%d",(ptr+i));
	  }    
	   //Display the array
	   printf("\n Display array:\n");
	   for(i=0;i<size;i++)
	   { 
	     printf("%d\t",*(ptr+i));
	   }    
	   int majority=size/2;
	   
	   for(i=0;i<size;i++)
	   {
            int count=1;// each value are count start at 1 value
		        for(int j=(i+1);j<size;j++)
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

