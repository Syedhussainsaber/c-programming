#include<stdio.h>
int main()
{
int n,k=0;
printf("Enter the value of n :\n");
scanf("%d",&n);
for(int i=0;i<2*n-1;i++)
{
    for(int j=0;j<2*n-1;j++)
    {
       
     /*   if((i==0)||(j==0)||(i==2*n-1)||(j==2*n-2))
{
printf("%d ",n); 
  }*/
  
  //  if((i+j==i)&&(i<2*n-2))
 if((i==k)&&(i<2*n-i)||(j==k)&&(j<2*n-j))
  {
printf("%d ",n-k);
      continue;
  }
   else
    {
        if(n-i<=0)
{
    printf("%d ",i-n+2);
    continue;
}      
  else if((j==((2*n-2)/2))||((i==((2*n-2)/2))))
   {
if(n-i<=0)
{
    printf("%d ",i-n+2);
    continue;
}        
   printf("%d ",n-i);
    } 
    else
printf("%d ",n-i);
    }
    }
    k++;
    printf("\n");
}
return 0;
}