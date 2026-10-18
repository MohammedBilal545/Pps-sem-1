#include<stdio.h>
void main()
{
    int n,org,rem,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==org)
    printf("%d is an armstrong number",org);
    printf("%d is not armstrong number",org);

}
