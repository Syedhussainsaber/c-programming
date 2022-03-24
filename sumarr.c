#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
int sum();
int main()
{
int n;
printf("Enter the size of an array :\n");
scanf("%d",&n);
int arr[n];
printf("Enter elements of an array :\n");
for(int i=0;i<n;i++)
{
    scanf("%d",(arr+i));   
}
printf("The sum of the elements in an array is %d\n",sum(arr,n));
return 0;
}
int sum(int *ptr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+*(ptr+i);
    }
    return sum;
}