#include<stdio.h>
#include<conio.h>
void main()
{
int a,temp,sum=0,rem;
printf("\n enter the  a number:");
scanf("%d",&a);
temp=a;
while(a!=0)
{
rem=a%10;
sum=sum+(rem*rem*rem);
a=a/10;
}
if(sum==temp)
{
printf("\n %d is an armstrong integer",temp);
}
else
{
printf(" /n %d is not a armstrong integer/n",temp);
}
getch();
}
