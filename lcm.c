#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
int lcm(int l,int y,int z)
{
int i=0;
for(i=1;i<10;i++)
{
if((((l * i)%y)==0)&&(((l * i)%z)==0))
{
    return l * i;
    break;
}
else
{  
     continue;
}
}
return l * i;
}
int main()
{
int x,y,z,l,p,q;
scanf("%d%d%d",&x,&y,&z);
if((x>y)&&(x>z))
{
l=x;
p=y;
q=z;
}
else if((y>z))
{
    l=y;
    p=x;
    q=z;
}
else
{
    l=z;
    p=x;
    q=y;
}
printf("The L.C.M of %d,%d and %d is %d\n",x,y,z,lcm(l,p,q));
return 0;
}