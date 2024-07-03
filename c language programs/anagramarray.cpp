#include<stdio.h>
	int main()
	{
	   int a[5],b[5],i,temp,j;
	   int size;
	   
	   size=sizeof(a)/sizeof(a[0]);
	   printf("\nEnter five values in array\n");
	   for(i=0;i<5;i++)
	   { scanf("%d",&a[i]);
	   }
	   printf("\nEnter five value in array\n");
	   for(i=0;i<5;i++)
	   { scanf("%d",&b[i]);
	   }
	   printf("\nDisplay array before sorting\n");
	   for(i=0;i<5;i++)
	   { printf("%d\t",a[i]);
	   }
	   printf("\ndisplay second array before sorting\n");
	   for(i=0;i<5;i++)
	   { printf("%d\t",b[i]);
	   }
	   //apply sorting logics
	   for(i=0;i<5;i++)
	   {
	      for(j=(i+1);j<5;j++)
	      {
		 if(a[i]>a[j])
		 {
		    temp=a[i];
		    a[i]=a[j];
		    a[j]=temp;
		 }
		 if(b[i]>b[j])
		 {
		    temp=b[i];
		    b[i]=b[j];
		    b[j]=temp;
		 }
	      }
	   }
	   printf("\nDisplay first array after sorting\n\n\n");
	   for(i=0;i<5;i++)
	   { printf("%d\t",a[i]);
	   }
	   printf("\nDisplay second array after sorting\n\n\n");
	   for(i=0;i<5;i++)
	   { printf("%d\t",b[i]);
	   }
	   //check anagram
	   int flag=0;
	   for(i=0;i<5;i++)
	   {
	      if(a[i]==b[i])
	      { flag=1;
		break;
	      }
	   }
	   if(flag)
	   { printf("\nArray is anagram");
	   }
	   else{
	      printf("\nArray is not anagram");
	   }
	   return 0;
	}

