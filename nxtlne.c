#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[1005];
    gets(s);
    i=0;
    while(s[i]!='\0')
     {
       if(s[i]==' ')
         printf("\n");
       else
         printf("%c",s[i]);
       i++;
      }
    return 0;
}
