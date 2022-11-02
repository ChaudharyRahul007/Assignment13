/*8. Write a recursive function to print first N terms of Fibonacci series*/
#include<stdio.h>
int fibo(int);
int fibo(int x)
{
    if(x==1 || x==2)
     return 1;
    return (fibo(x-1)+fibo(x-2));
}

int main()
{
    int n,i;
     printf("Enter how many term of fibonacci series you want to see :");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     printf("%d ",fibo(i));
     return 0;
}