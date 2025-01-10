#include<stdio.h>
int main()
{
    int a[10],i,j,n,count=0;
    printf("enter size:");
    scanf("%d",&n);
    printf("emter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;++j)
     {
         
         count ++;
         break;
     }
    }
    printf("%d",count);
    return 0;
}
