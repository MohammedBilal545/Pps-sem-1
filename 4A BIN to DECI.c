#include<stdio.h>
void main()
{
    int deci=0,bin,i=1,rem;
    printf("enter num in binary:");
    scanf("%d",bin);
    while(bin!=0)
    {
        rem=bin%2;
        bin=bin/2;
        deci=deci+rem*i;
        i=i*10;
    }
    printf("%d",deci);
}
