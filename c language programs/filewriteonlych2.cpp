#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int count=0;
	fp=fopen("C://Users//CORE i3//Desktop//abc.txt","w");
	do{
		printf("\n Enter a character:");
        scanf("%c",&ch);
        count++;
        _flushall();
        fputc(ch,fp);
      }while(count<10);
	
	return 0;
}