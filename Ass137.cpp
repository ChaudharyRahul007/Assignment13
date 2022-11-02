/*7. Write a recursive function to calculate HCF of two numbers*/
#include<stdio.h>
int hcf(int,int);
int hcf(int x, int y)
{

    if(y!=0)
    return hcf(y,x%y);
    else
    return x;
}
int main()
{
    int n,m;
    printf("Enter two numbers :");
    scanf("%d %d",&n,&m);
    printf("%d",hcf(n,m));
    return 0;
}