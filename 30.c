#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,i,f;
printf("Enter time in hours and minitues");
scanf("%d%d",&a,&c);
printf("Enter the second time in hours and minutes");
scanf("%d%d",&b,&d);
i=a+b;
j=c-d;
printf("The difference in time is %d\t%d",i,j);
return 0;
}
