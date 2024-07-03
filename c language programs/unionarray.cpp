//Union of Array
#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i,k,j,temp;
	printf("\nEnter 5 Elements of First Array ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter 5 Elements of Second Array ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nDisplay of First array"); //1 2 3 
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\nDisplay of second array");//1 2 4
	for(i=0;i<5;i++)
	{
		printf("\t%d",b[i]);
	}
	k=0;
	for(i=0;i<5;i++)
	{
		c[k]=a[i];
		k++;
	}
		for(i=0;i<5;i++)
	{
		c[k]=b[i];
		k++;
	}
		printf("\nDisplay of Union array");
		for(i=0;i<k;i++)
	{   int flag=0;
		for(j=i+1;j<k;j++)
		{
			if(c[i]==c[j])
			{
			  flag=1;
			  break;
			}
			
		}
		if(flag==0)
		{
			printf("%d\t",c[i]);		
		}
		
	} 
}


