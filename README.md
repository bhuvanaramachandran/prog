#include&lt;stdio.h>
#include&lt;conio.h>

void main(){

clrscr();

int a,sum=0,b;

printf("Enter a no");

scanf("%d ",&a);

while(a!=0)

{

b=a%10;

sum=sum+b;

a=a/b;

}

printf("the sum of the no is %d",sum);

getch();

}
