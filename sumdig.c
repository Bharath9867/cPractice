#include<stdio.h>
int main()
{
    int n,t,r,sum=0;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
      r=t%10;
      sum=sum+r;
      t=t/10;
     }
    printf("%d",sum);
    return 0;
}
