#include<stdio.h>
//#include<stdlib.h>   using recursion
//#include<string.h>
int fact(int n)
{
if(n==0)
{
return 1;
}
else if(n==1)
{
    return 1;
}
else
{
    return n*fact(n-1);
}
}
int main()
{
    int n;
    printf("Enter the number :\n");
    scanf("%d",&n);
printf("The Factorial of the given number %d is %d\n",n,fact(n));
return 0;
}