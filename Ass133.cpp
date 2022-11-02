/*3. Write a recursive function to calculate sum of first N even natural numbers*/
#include<stdio.h>
int sum(int);
int sum(int x)
{
    int s;
    if(x==1)
    return 2;
    s= 2*x+sum(x-1);
    return s;
    
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d ",sum(n));
    return 0;
}