#include<stdio.h>
void main()
{
int n1,n2,temp,5,rem,i;
scanf(" %d %d",&n1,&n2");
for(i=n1+1;i<n2;i++)
{
temp=i;
s=0;
while(temp!0)
{
rem=temp%10;
s=s+rem*rem*rem;
temp=temp/10;
}
if(s==i)
{
printf("%d,i");
}
}
}
