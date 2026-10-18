#include<stdio.h>
void main()
{
    double n1,n2,n3;
    printf("enter three num:");
    scanf("%f %f %f",&n1,&n2,&n3);
    if(n1>=n2&&n1>=n3)
    {
        printf("the greatest number is %21f\n",n1);
    }
    else if(n2>=n1&&n2>=n3)
    {
        printf("the greatest number is %21f\n",n2);

    }
    else
    {
        printf("the greatest number is %21f\n",n3);
    }
}
