#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
int hcf(int s,int p,int q)
{
    int mul=1;
    for(int i=2;i<=s;i++)
    {
        if(((s%i)==0)&&((p%i)==0)&&((q%i)==0))
        {
            if(i>mul)
            {
                mul=1;
            mul=mul*i;
            }
            continue;
        }
        else
        {
            continue;
        }
    }
    return mul;
}
int main()
{
int x,y,z;
int s,p,q;
scanf("%d%d%d",&x,&y,&z);
if((x<y)&&(x<z))
{
s=x;
p=y;
q=z;
}
else if ((y<z))
{
 s=y;
p=x;
q=z;   
}
else
{
 s=z;
p=x;
q=y;
}
printf("The H.C.F of %d,%d and %d is %d\n",x,y,z,hcf(s,p,q));
return 0;
}