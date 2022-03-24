#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
int mul,power,n;
int main2()
{
mul=1;
 
printf("Enter the number :\n");
scanf("%d",&n);
printf("Enter the power,You want to calculate :\n");
scanf("%d",&power);
for(int i=0;i<power;i++)
{
mul=mul*n;
}
printf("The %dth power of %d is %d\n",power,n,mul);
return 0;
}