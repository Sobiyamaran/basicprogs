#include<stdio.h>
void main()
{
    int a[50][50];
    int n,i,j,sum1=0;
    printf("enter the no of row and col");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=0;i++)
    {
        for(j=0;j<n;j++)
        {
           sum1=sum1+a[i][j];
             //printf("%d\n",sum1);
            /* if(i==0)
             {
                sum1=sum1+a[i][j];
             }
             else if(i==n-1)
             {
                 sum1=sum1+a[i][j];
             }
             else if(i>0&&j==n-i-1&&j>0)
             {
                 sum1=sum1+a[i][j];
             }*/
        }
    }
    for(i=n-1;i==n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            sum1=sum1+a[i][j];
             //printf("%d\n",sum1);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>0&&j==n-i-1&&j>0)
            {
                sum1=sum1+a[i][j];
                 //printf("%d\n",sum1);

            }
        }
    }
    printf("%d\n",sum1);
}
