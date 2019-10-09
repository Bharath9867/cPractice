#include<stdio.h>
int main()
{
    int a[1005],n,sum,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
      }
    sum=0;
    for(i=0;i<n;i++)
     {
       sum=sum+a[i];
      }
    printf("%d",sum);
    printf("answerrrr");
}

