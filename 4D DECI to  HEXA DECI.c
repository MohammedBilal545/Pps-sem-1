#include<stdio.h>
void main()
{
    int deci,hexa=0,i=1,rem;
    printf("enter num :");
    scanf("%d",&deci);
    while(deci!=0)
    {
        rem=deci%16;
        deci=deci/16;
        hexa=hexa+rem*1;
        i=i*10;
    }
    printf("%d",hexa);
}
