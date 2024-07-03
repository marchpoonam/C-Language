//intersection of Array
#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i,j,k,temp=0;
	printf("\n Enter Element of First Array ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter Element of Second Array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	//Sorting of 1st array
		for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	printf("\n Display 1sr of Array");
	for(i=0;i<5;i++)
	{
		printf("\t %d",a[i]);
	}
	//sorting of second array
		for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}printf("\n Display 2nd of Array");
	for(i=0;i<5;i++)
	{
		printf("\t %d",b[i]);
	}
	k=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		
			if(a[i]==b[j])
			{
				c[k]=a[i];
				k++;
				break;
			}
		
     	}
	}
	//Sorting of 3rd array
		for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(c[i]>c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}

	//printing of array
	printf("\n InterSection of Array");
	for(i=0;i<k;i++)
	{
		printf("\t %d",c[i]);
	}
	return 0;
}
