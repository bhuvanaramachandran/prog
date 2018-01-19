#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter the n value");
scanf("%d",&n);
if(n>0)
{
printf("n is large");
}
 elseif(n<0)
{
printf("n is small");
}
else
{
printf("n is zero");
}
getch();
}
