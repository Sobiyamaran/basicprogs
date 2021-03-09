#include<stdio.h>
void main()
{
    int a[50][50],trans[50][50];
    int n,m,i,j;
    printf("enter the rows and columns");
    scanf("%d",&n);
    printf("enter the elemnts");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            trans[i][j]=a[j][i];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",trans[i][j]);
        }
        printf("\n");
    }
}
