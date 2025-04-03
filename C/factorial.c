#include<stdio.h>
int main()
{
    int n,s=1;
    printf("enter the numbers ");
    scanf("%d",&n);
    while(n>0)
    {
        s=s*n;
        n--;
    }
    printf("the factorial is %d",s);
    return 0;
}