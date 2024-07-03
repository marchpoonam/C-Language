#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int count=0;
	fp=fopen("C://Users//CORE i3//Desktop//xyz.txt","r");
	if(fp==NULL)
	{
		printf("\nFile is not available");
		
	}
	else
	{
	while((ch=fgetc(fp))!=EOF)
	{
		count++;
		printf("%c",ch);
	}
	 printf("\nNumber of characters are:%d",count);	
	}
	return 0;
}