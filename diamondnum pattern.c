#include<stdio.h>
void main()
{
    int n,i,j,k,l;
    printf("enter the no of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        k=k-2;
        for(l=k;l>0;l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
}
//j<2*i-1  for star
