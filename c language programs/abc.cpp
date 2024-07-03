//Q.2-Write a C program to find third largest number from an array
 #include<stdio.h>
 #include<stdlib.h>
int main()
{
    int size,i,temp,j;
    int *ptr;
	   
	   printf("Enter the size of Array:");
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
	   //apply sorting logics
	   for(i=0;i<size;i++)
	   {
	      for(j=(i+1);j<size;j++)
	      {
		 if(*(ptr+i)>*(ptr+j))
		 {
		    temp=*(ptr+i);
		    *(ptr+i)=*(ptr+j);
		    *(ptr+j)=temp;
		 }
	      }
	   }
	   printf("\nDisplay array after sorting\n");
	   for(i=0;i<size;i++)
	   {
	    printf("%d\t",*(ptr+i));
	   }
	   
	   printf("\nThird Largest number is:%d",*(ptr+[size-3]));
	   return 0;
	}

