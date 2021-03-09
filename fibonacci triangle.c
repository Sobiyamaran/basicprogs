#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter the rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         int a=1,b=0,c;
        for(j=1;j<=i;j++)
        {
           printf("%d\t",a);
           c=a+b;
            b=a;
           a=c;

        }
        printf("\n");
    }
}
