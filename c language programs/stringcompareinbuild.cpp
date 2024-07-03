#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int result;
	printf("\nEnter First string:");
	gets(str1);
	printf("\nEnter Second string:");
	gets(str2);
	result=strcmp(str1,str2);
	if(result>0)
	printf("\n %s is Greater",str1);
	else if(result<0)
	printf("\n %s is Greater",str2);
	else
	printf("\n %s and %s are same",str1,str2);
	return 0;
}
	
	
	