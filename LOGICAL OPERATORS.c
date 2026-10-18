#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two num:");
    scanf("%d %d",&a,&b);
    printf("%d\n",(a<b)&&(b>a));
    printf("%d\n",(a>b)||(b>a));
    printf("%d\n",!(a>b));
}
