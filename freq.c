#include<stdio.h>
#include<string.h>
int main()
{
    char a[1005],b[10];
    int x,len,i;
    gets(a);
    len=strlen(a);
    for(i=0;i<10;i++)
       b[i]=0;
    for(i=0;i<len;i++)
     {
       x=a[i]-'0';
       if(x>=0 && x<=9)
         b[x]=b[x]+1;
      }
    for(i=0;i<10;i++)
       printf("%d ",b[i]);
    return 0;
}
