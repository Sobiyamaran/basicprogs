#include<stdio.h>
void main()
{
    int a[50],b[50],uni[50],inter[50];
    int i,n,m,l,j,k,count=0;
    printf("enter the no of elements");
    scanf("%d %d",&n,&m);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter the elements");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);

    }
    i=0;
    j=0;
    k=0;
    l=0;
    while(i<n&&j<m)
    {
        if(a[i]<b[j])
        {
           uni[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]>b[j])
        {
            uni[k]=b[j];
            j++;
            k++;
        }
        else if(a[i]==b[j])
        {
            uni[k]=a[i];
            inter[l]=a[i];
            i++;
            j++;
            k++;
            l++;
            count++;
        }
    }
    while(i<n)
    {
        uni[k]=a[i];
        i++;
        k++;
    }
    while(j<m)
    {
        uni[k]=b[j];
        j++;
        k++;
    }
    printf("union\n");
    for(k=0;k<((n+m)-count);k++)
    {
        printf("%d\t",uni[k]);
    }
    printf("\nintersection\n");
    for(i=0;i<count;i++)
    {
        printf("%d\t",inter[i]);
    }
}
