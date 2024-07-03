
#include <stdio.h>       
int main()    
{              
    int arr[5];
    printf("Enter the array elements ");
    for(int i=0;i<5;i++)  
	{  //Initialize array 
       scanf("%d",&arr[i]);    
    } 
 
    int n;
    printf("Enter the position of rotation ");
    scanf("%d",&n);        
 
    int length = sizeof(arr) / sizeof(arr[0]);
        for(int i = 0; i < n; i++)
            {    
              int j, temp;    
    
               temp = arr[length-1];            
                  for(j = length-1; j > 0; j--)
                   {    
                     arr[j] = arr[j-1];    
                   }    
            
                    arr[0] = temp;    
            }
        printf("Array  rotation: \n");    
         for(int i = 0; i< length; i++)
		  {    
            printf("%d ", arr[i]);    
          }    
    return 0;    
b}
