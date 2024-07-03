#include<stdio.h>
int main()
{
	int a[5],i,skey,flag=0,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Size or Length of array =%d",len);
	printf("\nEnter the 5 elements of array:");
	  for(i=0;i<len;i++)
	  {
	     scanf("%d",&a[i]);
	     
	  }
	  printf("\nEnter the search key:");
	  scanf("%d",&skey);
	  
	  for(i=0;i<len;i++)
	  {
	  	if(a[i]==skey)
	  	{
	  		flag=1;
	  		break;
	    }
	  	
	  }
    
	 if(flag)
	 {
	 	printf("\n\nElement Found");
	 }
	 else
	 {
	 	printf("\n\nElement Not Found");
	 }
	 
	return 0; 
	 
}
