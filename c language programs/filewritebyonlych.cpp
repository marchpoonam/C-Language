#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("C://Users//CORE i3//Desktop//abc.txt","w");
printf("\n Enter a character:");
scanf("%c",&ch);
fputc(ch,fp);
	return 0;
}