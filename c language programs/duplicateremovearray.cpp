 #include<stdio.h>
int main()
{
	int a[8],i,j,count=0,k;
	int len=sizeof(a)/sizeof(a[0]);
	printf("Enter the array values:\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	// logic
	for(i=0;i<len;i++)        
	{  
		for(j=i+1;j<len;j++)
		{
			if(a[i]==a[j])             
			{
				for(k=j;k<len-1;k++)    
				{
					a[k]=a[k+1];    
				}
				len--;
				j--;
			}
		}
	}
	printf("Display after duplicate remove:\n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
}
