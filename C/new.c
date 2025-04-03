#include<stdio.h>
void main ()
{
    int i;
    i=1;
    while(i<=1)
    if(i%2)
    printf("%d",i++);
    else
    printf("%d",++i);
    printf("%d",i+10);
    return ;
}