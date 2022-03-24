#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
int multiple_10(int c,int n)
{
int p=1,s;
for(int i=0;i<n;i++)
{
s=c/p;
if((c/p)==0)
{
 return p/10;
    break;
}
p=p*10;
}
return 0;
}
int main()
{
int n,q,result,sum=0,p=1,c;
printf("Enter the number :\n");
scanf("%d",&n);
q=n;
for(int i=0;i<n;i++)
{
    q=q%10;
    c=(n/p);
    result=q*multiple_10(c,n);
    sum=sum+result;
    q=n;
    p=p*10;
    q=n/p;
    if(q==0)
    {
        break;
    }
}
if(sum==n)
{
    printf("The number is a Palindrome.\n");
}
else
{
    printf("The number is not a palindrome.\n");
}
return 0;
}