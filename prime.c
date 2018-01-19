#include<stdio.h>
int main(){
int i=2,n,p=0;
printf("\n Enter a number : ");
scanf("%d",&n);
while(i <=n/2)
{
if(n % i == 0)
{
p=1;
break;
}
i++;
}
if(p==0)
printf("\n This Is a Prime Number : %d",n);
else
printf("\n This Is Not a Prime Number : %d",n);

return 0; 
}
