#include<stdio.h>
int main()
{
    int a[10],n,i,sum=0;
    printf("enter size:");
    scanf("%d",&n);
    printf("emter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
     if(a[i]%2==0)
     {
         sum=sum+a[i];
     }
    }
    printf("%d",sum);
    return 0;
}
