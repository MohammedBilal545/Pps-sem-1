#include<stdio.h>
int gcd(int n,int m)
{
    if(m!=0)
    return gcd(m,n%m);
    return n;
}

void main()
{
  int a,b,res;
  printf("enter two numbres:");
  scanf("%d %d",&a,&b);
  res=gcd(a,b);
  printf("GCD of %d and %d is %d",a,b,res);
}
