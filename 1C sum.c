#include<stdio.h>
void main()
{
    int i,n,sum;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of first %d numbers is %d",n,sum);
}
