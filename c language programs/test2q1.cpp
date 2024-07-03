#include<stdio.h>

int main(){
    int arr[5],n,num;
    int size=sizeof(arr)/sizeof(int);

    //Enter the values inn array
    printf("Enter the values of Array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    //rotate an array by n
    printf("Enter the value of n to rotate array\n");
    scanf("%d",&n);
    for (int i = 0; i < n-1; i++)
    {
        num=arr[size -1]; // last ele of array
        for (int i = size -1; i>0; i--)
        {
            arr[i]=arr[i-1];
        }    
        arr[0]=num;
    }
    
    //Print the rotated array
    printf("The rotated Array\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
