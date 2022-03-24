#include<stdio.h>
int main()
{
int n,k=1;
printf("Enter the value of n :\n");
scanf("%d",&n);
for(int i=0;i<2*n-1;i++)
{
    for(int j=0;j<2*n-1;j++)
 {
    if((i==j)||((i+j)==2*n-2)||(j==(2*n-2)/2))
    {
            if(n-i<=0)
{
    printf("%d ",i-n+2);
    continue;
}      
        printf("%d ",n-i);
    }
else if((i==0)||(j==0)||(i==2*n-2)||(j==2*n-2))
{
    printf("%d ",n);
}
else if(i==((2*n-2)/2))
{
  if(n-j<=0)
{
    printf("%d ",j-n+2);
    continue;
}      
        printf("%d ",n-j);
}
else 
{ 
 //   if((i==k)||(j==k)||(i==2*n-(2+k))||(j==2*n-(2+k))
   /* {
   while((k<=n/2)&&((i==k)||(j==k)||(i==2*n-(2+k))||(j==2*n-(2+k))))
    {
     printf("%d ",n-k);
     k++;
    }
 }*/
    if((i==1)||(j==1)||(i==2*n-(2+1))||(j==2*n-(2+1)))
    {
  printf("%d ",n-1);
}
     else if((i==2)||(j==2)||(i==2*n-(2+2))||(j==2*n-(2+2)))
    {
        printf("%d ",n-2);
    }
    else if((i==3)||(j==3)||(i==2*n-(2+3))||(j==2*n-(2+3)))
    {
        printf("%d ",n-3);
    }
     else if((i==4)||(j==4)||(i==2*n-(2+4))||(j==2*n-(2+4)))
    {
        printf("%d ",n-4);
    }
     else if((i==5)||(j==5)||(i==2*n-(2+5))||(j==2*n-(2+5)))
    {
        printf("%d ",n-5);
    }
     else if((i==6)||(j==6)||(i==2*n-(2+6))||(j==2*n-(2+6)))
    {
        printf("%d ",n-6);
    }
    else
 printf("  ");
}
 }
 printf("\n");
}
return 0;
}