/*1. Write a recursive function to calculate sum of first N natural numbers*/
#include<stdio.h>
int firstN(int);
int firstN(int x)
{   
    int s;
    if(x==1)
    return 1;
     s=x+firstN(x-1);
     return s;
}
int main()
{
    int n;
    printf("Enter a number to print natural no :");
    scanf("%d",&n);
    printf("%d",firstN(n));
    return 0;
}