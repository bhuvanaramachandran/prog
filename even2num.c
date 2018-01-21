#include<stdio.h>
#include<conio.h>
void main()
{
int ,x,y,rem,i;
printf("enter the value of x and y");
scanf("%d %d",&x,&y);
printf(" \n the even numberbetween  %d %d are",x,y);
for(i=x;i<=y;++i)
rem=i%2;
if(rem==0)
{
printf("/n %d",i);
}
getch();
}
