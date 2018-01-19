#include<stdio.h>
void main()
{
int b,e,s=1,i;
scanf("enter the base number=%d",&b);
scanf("enter the exponent number=%d",&e);
for(i=0;i<e;++i)
{
s=s+b;
}
printf("%d",s);
}
