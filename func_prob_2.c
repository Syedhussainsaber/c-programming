#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fun()
{
int a;
int b;
return a+b;
}
int main()
{
    void saber();
    void (*ptr)();
    ptr=saber;
    (*ptr)();
    saber();
    fun(1);
return 0;
}
void saber()
{
    printf("How are you Saber\n");
}