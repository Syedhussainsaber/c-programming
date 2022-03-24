#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
void check(int n)
{
    (n%2)?printf("The given number %d is Odd number\n",n):printf("The given numner %d is an Even number\n",n);
}
int main()
{
int n;
printf("Enter the number :\n");
scanf("%d",&n);
check(n);
return 0;
}