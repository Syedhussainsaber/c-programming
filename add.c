#include<stdio.h>
int fun(int a,int b)
{
return a+b;
}
int main()
{
int a,b;
printf("Enter the value of a and b :\n");
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("The sum of a and b is %d \n",fun(a,b));
return 0;
}  