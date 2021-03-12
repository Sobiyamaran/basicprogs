#include<stdio.h>
void main()
{
    int a[50],b[50],c[50];
    int n,i,j,temp,k;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements in 1st array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements in 2st array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
        c[i+n]=b[i];
    }
   /* for(i=0;i<n+n;i++)
    {
        printf("%d",c[i]);
    }*/
    for(i=0;i<n+n;i++)
    {
        for(j=i+1;j<n+n;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    for(i=0;i<n+n;i++)
    {
    printf("%d\t",c[i]);
    }
}
