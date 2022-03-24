#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void fun()
{
    printf("fun() starts.\n");
    while(1)
{
    if(getchar())
    {
        break;
    }
    printf("fun() ends\n");
}
}
    int main()
{
    clock_t t;
    t=clock();
    fun();
    t=clock()-t;
    double time_taken=((double)t)/CLOCKS_PER_SEC;     //IN SECONDS
    printf("fun() tooks %lf seconds to execute\n",time_taken);

return 0;
}