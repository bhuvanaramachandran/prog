#include <stdio.h>
int main()
{
int n,a,r,s=0;
printf(" enterthe number");
scanf("%d",&n);
  a=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(a==s)
    {
        printf("\n %d is a palindrome mumber",a);
    }
    else
    {
        printf("\n %d is a not palindrome,a");
    }
}
