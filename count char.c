#include<stdio.h>
void main()
{
    char str[50];
    int al=0,sp=0,di=0;
    printf("enter the string");
    gets(str);
    int i;
    i=0;
    while(str[i]!='\0')
    {
         if((str[i]>=65&& str[i]<=90)||(str[i]>=97&&str[i]<=122))
         {
             al++;
         }
         else if(str[i]>='0'&&str[i]<='9')
         {
             di++;
         }
         else{
            sp++;
         }
         i++;
    }
    printf("alphabet:%d\n digits:%d\n special character:%d\n",al,di,sp);
}
