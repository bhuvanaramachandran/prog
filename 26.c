#include<stdio.h>
#include<conio.h>
void main()
{
int a[200],r,i,j,k,b;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
for(k=0;k<n;k++)
{
b=a[j];
a[j]=a[k];
a[k]=b;
}
}
}
printf("%d",b);
}
