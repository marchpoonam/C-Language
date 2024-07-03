#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("C://Users//CORE i3//Desktop//abc.txt","w");
	if(fp==NULL)
	{
		printf("\nFile is not available");
		
	}
	else
	{
		printf("\n File opened");
		
	}
	return 0;
}