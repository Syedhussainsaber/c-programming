#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n;
ptr=(int *)calloc(n,sizeof(int));
printf("Enter the size of the array :\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    printf("Enter the value of index %d :\n",i);
    scanf("%d",&ptr[i]);
}
for(int i=0;i<n;i++)
{

    printf("The value of index %d is %d\n",i,ptr[i]);
   // scanf("%d",&i);
}
ptr=(int *)realloc(ptr,n*sizeof(int));
printf("Enter the new size of the array :\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    printf("Enter the value of index %d :\n",i);
    scanf("%d",&ptr[i]);
}

for(int i=0;i<n;i++)
{
    printf("The value of index %d is %d\n",i,ptr[i]);
   // scanf("%d",&i);
}
// free(ptr);
return 0;
}