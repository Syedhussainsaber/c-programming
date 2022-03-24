#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void dynamic(int s,...)
{
    printf("%d \n",s);
}
int main()
{
dynamic(5,6,5);
dynamic(456,23,45,3);
return 0;
}