#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,sum=0;
printf("enter the value of a");
scanf("%d",&a);
for(i=0;i<a;i++)
{
sum=sum+a;
}
printf("sum=%d",sum);
getch();
}
