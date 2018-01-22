#include<stdio.h>
#include<conio.h>
void main()
{
int array [100],min,size,c,location=1;
printf("Enter the number of elements in array\n");
scanf("%d",&size);
printf("Enter %d integers\n",size);
for(c=0;c<size;c++)
scanf("%d",&array[c]);
minimum=array[0];
for(c=1;c<size;c++)
{
if(array[c]<minimum)
{
minimum=array[c];
location=c+i;
}
}
printf("minimum element is present at location %d and its value is %d \n",location,minimum);
return 0;
}
