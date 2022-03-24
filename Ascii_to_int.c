#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
int Ascii_to_int(char n)
{
    int i=48,j=0,p;
    for(i=48,j=0;(i<58)&&(j<10);i++,j++)
{
     p=(int)n;
    if(i==p)
    {
        p=j;
    return p;
    }
} 
return 0;
}
int main()
{
char *ptr;
ptr="23";
printf("Before :\n");
for(int i=0;i<2;i++)
{
    printf("%d  ",ptr[i]);
}
printf("\n");
printf("%d\n",Ascii_to_int(ptr[0])+Ascii_to_int(ptr[1]));
return 0;
}