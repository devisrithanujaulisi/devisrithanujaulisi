#include<stdio.h>
int main()
{
    int a[10],i,n,max,min;
    printf("enter size:");
    scanf("%d",&n);
    printf("emter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
       if(a[i]>max);
       {
           max=a[i];
       }
       if(a[i]<min)
       {
         min=a[i];
       }
    }
    printf("%d\n%d",max,min);
    return 0;
}