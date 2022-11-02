/*Write a program in C to count the digits of a given number using recursion*/
#include<stdio.h>
int digit(int);
int digit(int x)
{  
    static int c=0;
    if(x==0)
    return c;
    else
    {
        c++;
       return (digit(x/10));
    }
}
int main()
{
    int n;
    printf("Enter a numbers :");
    scanf("%d",&n);
    printf("%d",digit(n));
    return 0;
}