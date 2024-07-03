
    #include<stdio.h>
    int main()
    {
	
	int first[5],second[5];
	int len1 = sizeof(first)/sizeof(int);//5
	int len2 = sizeof(second)/sizeof(int);//5
	printf("First Array Enter %d Values:",len1);
	for(int i=0;i<len1;i++)
	{
		scanf("%d",&first[i]);	
	}
	printf("Second Array Enter %d Values:",len2);
	for(int i=0;i<len2;i++)
	{
		scanf("%d",&second[i]);	
	}
// after merge [2,2,2,2,2,5,5,5,5,5]
	int third[len1+len2];//[5+5]
	int index=0;
	for(int i=0;i<len1;i++)//0 1 2 3 4 5<5
	{
		third[index]=first[i];	
		index++;//0 1 2 3 4
	}
	for(int i=0;i<len2;i++)
	{
		third[index] = second[i];
		index++;	
	}
	printf("After Merged Array:");
	for(int i=0;i<len1+len2;i++)
	{
		printf("%d ",third[i]);	
	}
	return 0;
}
