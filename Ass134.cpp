/*4. Write a recursive function to calculate sum of squares of first n natural numbers*/
#include<stdio.h>
int sum(int);
int sum(int x)
{
    int s;
    if(x==1)
    return 1;
    s= x*x+sum(x-1);
    return s;
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}