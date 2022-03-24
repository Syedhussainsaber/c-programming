#include<stdio.h>
int count();
int power();
//#include<stdlib.h>
//#include<string.h>
int main()
{
int n,sum=0,result,q,c;
printf("Enter the value of n \n");
scanf("%d",&n);
c=count(n);
q=n;
for(int i=0;i<n;i++)
{
    result=q%10;
    sum=sum+power(result,c);
    q=q/10;
    if(q==0)
    { 
        break;
    }
}
if(sum==n)
{
    printf("The number %d is an armstrong number.\n",n);
}
else
{
printf("the number %d is not an armstrong number.\n",n);
}
return 0;
}
int count(int n)
{

int p=1,count;
for(int i=0;i<n;i++)
{
count=n/p;
if(count==0)
{
     return i;
    break; 
}
p=p*10;
}
return 0;
}
int power(int result,int c)
{
    int mul=1;
    for(int i=0;i<c;i++)
    {
        mul=mul*result;
    }
    return mul;
}