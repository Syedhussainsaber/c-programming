#include<stdio.h>
int main()
{
int a,b,i;
scanf("%d\n%d",&a,&b);
if(((a<=9)&&(a>0))&&((b>9)&&(b<1000000)))
{
for(int i=a;i<10;i++)
{
if(i==1)
printf("one\n");
else if(i==2)
printf("two\n");
else if(i==3)
printf("three\n");
else if(i==4)
 printf("four\n");
else if(i==5)
printf("five\n");
else if(i==6)
printf("six\n");
else if(i==7)
printf("seven\n");
else if(i==8)
printf("eight\n");
else if(i==9)
printf("nine\n");
}
for(int j=10;j<=b;j++)
{
(j%2)?printf("odd\n"):printf("even\n");
}
}
return 0;
}