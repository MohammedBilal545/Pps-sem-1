#include<stdio.h>
int main()
{
    int P,T,R,simple;
    printf("enter principel value");
    scanf("%d",&P);
    printf("enter time value");
    scanf("%d",&T);
    printf("enter rate value");
    scanf("%d",&R);
    simple=P*T*R/100;
    return 0;
}
