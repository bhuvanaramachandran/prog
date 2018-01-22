#include<stdio.h>
#include<conio.h>
void main()
{
int first,difference,terms,value,sum=0,i;
printf("Enter the number of terms in AP series\n");
scanf("%d %d",&first,&diff);
value=first;
printf("AP series\n");
for(i=0;i<terms;i++)
{
printf("%d",value);
sum+=value);
value=value+diff;
}
printf("\n sum of the AP series till %d terms is %d\n":terms,sum);
getch();
return 0;
}
