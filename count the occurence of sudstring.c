#include<stdio.h>
void main()
{
    char str1[50],str2[50];
    printf("enter string");
    gets(str1);
    printf("enter substring");
    gets(str2);
    int i,len=0,count=0,j;
    for(i=0;str2[i]!='\0';i++)
    {
        //printf("%c",str2[i]);
      len++;
    }
   // printf("%d",len);
    for(i=0;str1[i]!='\0';i++)
    {
       // for(j=0;str2[j]!='\0';j++)
       // {
       j=0;
            while(str1[i+j]==str2[j]&&j<len)
            {
                printf("%c",str1[i+j]);
                //count++;
                j++;

            }
            if(j==len)
            {
                i+=len;
                count++;
                printf("%d ",i+j);
               // break;
            }

        //}

    }
     printf("%s:%d ",str2,count);
   /* printf("%d",count);
    if(count%len==0)
    {
      count=count/len;
      printf("%s:%d",str2,count);
    }*/
}
