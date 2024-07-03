#include<stdio.h>
int main()
{
	int b[4],rev=0,i,j,k;
	int a[]={5472,8371,3425,3758,8469};
	for(i=0;i<5;i++)              
	{
		int no=a[i];    
		j=0;
		while(no!=0)   
		{
			b[j++]=no%10;        
			no=no/10; 
		}
		for(j=0;j<4;j++)
		{
			for(k=j+1;k<4;k++)
			{
				if(b[j]>b[k])
				{
					int temp=b[j];
					    b[j]=b[k];
					    b[k]=temp;
				}
			}
		}                     
		for(j=0;j<4;j++)
		{
			rev=rev*10+b[j];
		}
		a[i]=rev;
		rev=0;
	}
printf("Display after sort:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
