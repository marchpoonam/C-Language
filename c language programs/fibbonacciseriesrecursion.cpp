#include<stdio.h>

//Declare the function for fibonacci series
void fib(int a,int b, int n);

int main(){
    int a=0,b=1,n;
    printf("Enter the number for fibonacci series\n");
    scanf("%d",&n);

    printf("%d %d ",a,b);
    //Call the function 
    fib(a,b,n-2);

    return 0;
}

//Function for fibonacci series
void fib(int a, int b, int n)
{ 
    if(n== 0){
        return;
    }
    int c=a+b;
    printf("%d ",c);
    fib(b,c,n-1);
}

