#include<stdio.h>
#include<conio.h>
void main()
{
int array[maximum size];
int i,N;
printf("Enter size of array:");
scanf("%d",&N);
printf("Enter %d Elements in the array":N);
for(i=0;i<N;i++)
{
scanf("%d",&array[i]);
}
printf("\n Elements in array are:");
for(i=0;i<N;i++)
{
printf("%d",array[i]);
}
return 0;
}
