#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,r1,r2;
    printf("enter three num;");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>o)
    {
    printf("roots are imagrenary");
    }
    else if(d==0)
    {
        r1=-b/2*a;
        printf("roots are equal");
        printf("%f",r1);
    }
    else
    {
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("%f %f",r1,r2);
    }
}
