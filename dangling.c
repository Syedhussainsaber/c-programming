#include<stdio.h>
#include<stdlib.h>
int *fun()
{
int a=5;
return a;
}
int main()
{
    // case 1: Deallocation of memory //

int *ptr=(int *)malloc(5*sizeof(int));
ptr[1]=4;
ptr[4]=5;
ptr[0]=1;
ptr[3]=6;
printf("%d\n",*ptr);
free(ptr);
//Now the ptr becomes a dangling pointer //
//case 2:
int *ptr1;
ptr1=fun();
printf("%d\n",fun());

return 0;
}