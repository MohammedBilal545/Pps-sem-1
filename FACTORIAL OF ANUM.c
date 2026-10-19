#include<stdio.h>
void main()
{
    int i,n,f;
    printf("enter a num:");
    scanf("%d",&n);
    if(n<0)
        printf("no factorial");
    else
    {
        f=1;
        for(i=1;i<=n;i++)
          f*=i;
    }
    printf("%d",f);
}
