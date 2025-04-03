#include<stdio.h>
#include<conio.h>
int selectionsort(int a[],int n);
int main()
{
    int a[100],n,i;
    printf("too many elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the elements of array");
        scanf("%d",&a[i]);
    }

selectionsort(a,n);
for(i=0;i<=n;i++)
printf("sorted array in ");
for(i=0;i<=n;i++)
printf("%d",a[i]);

{
    int min,loc,temp,i,j;
    min=a[0];
    for(i=0;i<=0;i++)
    {
        min=a[i];
        loc=i;
    }
    for (j=i+1;j<=n-1;j++)
    {
        if(a[j]<min)
        min=a[j];
        loc=j;

    }
    if(loc!=i)
    {
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
}

return 0;
}