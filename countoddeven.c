#include <stdio.h>
#include <stdlib.h>
int odd();
int even();
//#include<string.h>
int main()
{
    int *ptr;
    int n;
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    even(ptr, n);
    printf("even=%d\n", even(ptr, n));
    // printf("%d\n",even(ptr,n));
    printf("odd=%d\n", odd(ptr, n));
    // printf("%d\n",odd(ptr,n));
    return 0;
}
int even(int *ptr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((*(ptr + i)) % 2 == 0)
        {
            sum = sum + 1;
        }
    }
    return sum;
}
int odd(int *ptr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((*(ptr + i)) % 2 != 0)
        {
            sum = sum + 1;
        }
    }
    return sum;
}