/*5. Write a recursive function to calculate sum of digits of a given number*/
#include<stdio.h>
int sum(int);
int sum(int x)
{
    int s;
    if(x==0)
    return 0;
    s=x%10+sum(x/10);
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