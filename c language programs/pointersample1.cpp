#include<stdio.h>
#include<malloc.h>
int main()
{
	int *ptr,size,i;
	printf("How much memory you requird:");
	scanf("%d",&size);
	ptr=(int *)malloc(sizeof(int)*size);
	for(i=1;i<=size;i++)
	{
	printf("\n Enter value on %u block",ptr);
	scanf("%d",ptr);
	ptr++;	
	}
	ptr=ptr-size;
	printf("display all values:");
	for(i=1;i<=size;i++)
	{
		printf("%u----->%d\n",ptr,*ptr);
	ptr++;
	}
	return 0;
}
