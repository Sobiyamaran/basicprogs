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
            printf("\n");
        }
        else
        {
            printf("%c",str[i]);
        }
        i++;
    }
}
