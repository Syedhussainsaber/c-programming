#include <stdio.h>
#include <stdlib.h>
int mul(int *a,int *b,int ra,int cb,int ca,int rb)
{
int sum=0;
for(int i=0;i<ca;i++)
{
        for(int k=0;k<rb;k++)
        {
            if(i==k)
            {
sum=sum+(*(a+k))*(*(b+k));
            }
        }
          printf("%d ",sum);
    printf("\n");
}
return 0;
}
int main()
{
    int ra, ca, rb, cb;
    printf("\n");
    printf("Enter the no  of rows in the matrix A :\n");
    scanf("%d", &ra);
    printf("Enter the no  of columns in the matrix A :\n");
    scanf("%d", &ca);
    printf("\nEnter the no of rows in the matrix B :\n");
    scanf("%d", &rb);
    printf("Enter the no of columns in the matrix B :\n");
    scanf("%d", &cb);
    int a[ra][ca], b[rb][cb];

    printf("\nThe matrix A is a size of %d*%d\n", ra, ca);
    printf("The matrix B is a size of %d*%d\n", rb, cb);
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < ca; j++)
        {
            printf("\nEnter the element%d%d in the matrix A :\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < rb; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            printf("\nEnter the element%d%d in the matrix B :\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n\nThe given matrix A is :\n\n");
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < ca; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\nThe given matrix B is :\n\n");
    for (int i = 0; i < rb; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    if(ca==rb)
    {
mul(&a[0][0],&b[0][0],ra,cb,ca,rb);
    }
    else
    { printf("The no of columns in the matrix A is not equal to the no rows int the matrix B\nHence we can't do multiplication between these two matrices.\n");
    }
    return 0;
}
