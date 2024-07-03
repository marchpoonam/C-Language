#include<stdio.h>
//#include<dos.h>
int main()
{
	FILE *fp;
	char ch[100];
	fp=fopen("C://Users//CORE i3//Desktop//xyz.txt","r");
	if(fp==NULL)
	{
		printf("\nFile is not available");
		
	}
	else
	{
		while(!feof(fp))
	
	{
		//fgets(ch,100,fp);
		fread(ch,100,1,fp);
		printf("%s",ch);
		//delay(500);
	}
		
}
	return 0;
}