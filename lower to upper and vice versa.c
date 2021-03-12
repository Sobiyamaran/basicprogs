#include<stdio.h>
void main()
{
    char str[50];
    printf("enter the sentence");
    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            printf(" ");
        }
        else if(str[i]>=65 && str[i]<=90)
        {
            printf("%c",str[i]+32);
        }
        else if(str[i]>=97&&str[i]<=122)
        {
            printf("%c",str[i]-32);
        }

        i++;
    }
}
