#include<stdio.h>
int main()
{
    int n,i,j,a[1005],b[1005];
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
      }
    j=n-1;
    i=0;
    while(j>=0)
     {
       b[i]=a[j];
       i++;
       j--;
      }
    for(i=0;i<n;i++)
     {
       printf("%d ",b[i]);
      }
    return 0;
}
