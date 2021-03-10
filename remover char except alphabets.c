#include<stdio.h>
void main()
{
    char str[50];
    printf("enter the string");
    scanf("%s",&str);
    int i=0;
    while(str[i]!='\0')
    {
        if((str[i]>=65&& str[i]<=90)||(str[i]>=97&&str[i]<=122))
        {
            printf("%c",str[i]);
        }
        i++;
    }
}
