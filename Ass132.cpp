/*2. Write a recursive function to calculate sum of first N odd natural numbers*/
#include<stdio.h>
int oddsum(int);
int oddsum(int x)
{
    int s;
    if(x==1)
    return 1;
    s = (2*x-1)+oddsum(x-1);
    return s;

}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d",oddsum(n));
    return 0;
}