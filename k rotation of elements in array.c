#include<stdio.h>
void main()
{
    int n,k,temp,i,j;
    int a[50];
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter no of rotation");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        for(j=0;j<=n/2;j++)
        {
            temp=a[j];
            a[j]=a[n-1];
            a[n-1]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
