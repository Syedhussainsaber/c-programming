#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct triangle 
{
    int a;
    int b;
    int c;
}  triangle;
int herons(triangle *tr,int n)
{
float s,p;
for(int i=0;i<n;i++)
{
    printf("%d %d %d\n",tr[i].a,tr[i].b,tr[i].c);
    p=(float)(tr[i].a+tr[i].b+tr[i].c)/2;
    printf("%0.3f\n",p);
s=sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
printf("%0.3f\n",s);
}
return 0;
}

//#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    triangle *ptr=(triangle *)malloc(n*sizeof(triangle));
for(int i=0;i<n;i++)
{
    scanf("%d%d%d",&ptr[i].a,&ptr[i].b,&ptr[i].c);
}
herons(ptr,n);
return 0;
}