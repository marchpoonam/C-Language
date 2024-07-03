/*18) Write a program in C to to print next greater elements in a given unsorted array. Elements for
which no greater element exist, consider next greater element as -1.
Expected Output :
The given array is : 5 3 10 9 6 13
Next Bigger Elements are:
Next bigger element of 5 in the array is: 10
Next bigger element of 3 in the array is: 10
Next bigger element of 10 in the array is: 13
Next bigger element of 9 in the array is: 13
Next bigger element of 6 in the array is: 13
Next bigger element of 13 in the array is: -1
Next Bigger Elements Array:
10 10 13 13 13 -1
*/
#include<stdio.h>
int main()
{
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);
    int next, i, j;
    printf("\nEnter the %d array elements:",n);
    for (int i = 0; i < 10; i++)
    {
    
        scanf("%d",&arr[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        next = -1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
        }
        printf("Next bigger element of %d in the array is : %d\n", arr[i], next);
    }
    return 0;
}
