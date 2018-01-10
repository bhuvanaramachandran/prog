#include<stdio.h>
#include<conio.h>
void main()
{
int year;
printf(enter the year");
scanf("%d",&year);
if(year%4==0)
{
if(year%100==0)
{
if(year%400==0)
{
printf("year is leap",year);
}
else
{
printf("not leap year",year);
}
else
{
printf("leap year",year);
}
else
{
printf("not leap year");
}
getch();
}
