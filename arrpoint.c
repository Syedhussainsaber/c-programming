#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
int fun(int **ptr)
{
for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
        printf("%d ",*(*ptr+j));
    }
    printf("\n");
}
return 0;
}
int main()
{
int a[2][2];
int **p;
p=a;
for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
        scanf("%d ",(*p+j));
    }
    printf("\n");
}
fun(&a);
return 0;
}