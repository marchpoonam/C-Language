     #include<stdio.h>
	 int main() 
	 {
	   	int arr[5];
		int delValue;
		int count=0;
		int len = sizeof(arr)/sizeof(int); // sizeof(arr[0]) 20/4=5
		printf("Enter %d values:",len);
		for(int i=0;i<len;i++)
		   {
			scanf("%d",&arr[i]);
			}//10 17 22 30 45	
		    printf("Enter deleted Value:");
		     scanf("%d",&delValue);// 30
		     printf("\nLength:%d\n",len);//5
			for(int i=0;i<len;i++)
			{
				if(arr[i]==delValue)// 30==30
				{
					count++;//count=1
					for(int j = i;j<len;j++)
					{
					  arr[j] = arr[j+1];	//2+1
					}	
				}		
			}
			printf("\nAfter Removed:");
			for(int i=0;i<len-count;i++)
			{
				printf("%d ",arr[i]);	
			}
			
			return 0;
}

