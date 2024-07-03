//Q.2-Write a C program to find third largest number from an array
 #include<stdio.h>
int main()
{
    int size,a[10],i,temp,j,length;
	   
	   printf("Enter the size of Array:");
	   scanf("%d",&size);
	   printf("\nEnter %d elements in array:\n",size);
	   for(i=0;i<size;i++)
	   { scanf("%d",&a[i]);
	   }
	   printf("\nDisplay array before sorting:\n");
	   for(i=0;i<size;i++)
	   { printf("%d\t",a[i]);
	   }
	   //apply sorting logics
	   for(i=0;i<size;i++)
	   {
	      for(j=(i+1);j<size;j++)
	      {
		 if(a[i]>a[j])
		 {
		    temp=a[i];
		    a[i]=a[j];
		    a[j]=temp;
		 }
	      }
	   }
	   printf("\nDisplay array after sorting\n");
	   for(i=0;i<size;i++)
	   { printf("%d\t",a[i]);
	   }
	   
	   printf("\nThird Largest number is:%d",a[size-3]);
	   return 0;
	}

