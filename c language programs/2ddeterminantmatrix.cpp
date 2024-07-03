 #include<stdio.h>
 int main()
{
	int arr1[3][3],i,j,det=0;
	printf("Enter the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Display the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("%d ",arr1[i][j]);	  
		}
		printf("\n");
	}
	// calculate determinant of 3*3 matrix
	
	for(i=0;i<3;i++)
	{
		det = det + (arr1[0][i] * (arr1[1][(i + 1) % 3] * arr1[2][(i + 2) % 3] - arr1[1][(i + 2) % 3] * arr1[2][(i + 1) % 3]));
	}
printf("Determinant of the matrix :%d",det);

return 0;
}
