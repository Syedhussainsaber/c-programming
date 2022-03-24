#include<stdio.h>
#include<string.h>
int Ascii_to_int(char *n)
{
    int i=48,j=0,p;
    for(i=48,j=0;(i<58)&&(j<10);i++,j++)
{
     p=(int)n[i];
    if(i==p)
    {
        p=j;
    return p;
    }
} 
return 0;
}
int main(int argc, char *argv[])
{
if(strcmp(argv[1],"22")==0)
{
    printf("%d\n",Ascii_to_int((*(argv+2))));
}   
    /* code */
    return 0;
}