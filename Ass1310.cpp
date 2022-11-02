/*10. Write a program in C to calculate the power of any number using recursion.*/
#include<stdio.h>
int power(int , int);
int power(int a , int b)
{   
    if(b==0)
    return 1;
    else
    return b* power(a,b-1);

}
int main()
{
    int b,p,r;
    printf("Enter a base value :");
    scanf("%d",&b);
    printf("Enter a power value :");
    scanf("%d",&p);
    r=power(b,p);
    printf("%d",r);
    return 0;

}