#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
int sum(int n)
{
    int result=0,sum=0,q;
    q=n;
    for(int i=0;i<n;i++)
{
    result = q%10;
    sum=sum+result;
    q=q/10;
    if(q==0)
{
    break;
}
}
return sum;
}
int main()
{
int n;
printf("Enter the value of n :\n");
scanf("%d",&n);
printf("The sum of the digits in the given number %d is %d\n",n,sum(n));
return 0;
}