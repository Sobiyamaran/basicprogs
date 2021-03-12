#include<stdio.h>
void  main()
{
    int n,i;
    int b[50];
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
       b[i]=n%2;
       n=n/2;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",b[i]);
    }
}
