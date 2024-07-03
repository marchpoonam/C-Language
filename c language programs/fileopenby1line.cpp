#include<stdio.h>
//#include<dos.h>
int main()
{
	FILE *fp;
	char ch[25];
	fp=fopen("C://Users//CORE i3//Desktop//xyz.txt","r");
	if(fp==NULL)
	{
		printf("\nFile is not available");
		
	}
	else
	
	{
		fgets(ch,22,fp);
		printf("%s",ch);
		//delay(500);
	}
		
	
	return 0;
}