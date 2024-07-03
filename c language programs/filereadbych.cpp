#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("C://Users//CORE i3//Desktop//xyz.txt","r");
	if(fp==NULL)
	{
		printf("\nFile is not available");
		
	}
	else
	{
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
		
	}
	return 0;
}