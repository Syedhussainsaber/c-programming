#include <stdio.h>
//#include<stdlib.h>
//#include<string.h>
int count(int n)
{
    int count, p = 1;
    for (int i = 0; i < n; i++)
    {
        count = n / p;
        p = p * 10;
        if (count == 0)
        {
            return i;
            break;
        }
    }
    return 0;
}
int power(int q, int c)
{
    int mul = 1;
    for (int j = 0; j < c; j++)
    {
        mul = mul * q;
    }
    return mul;
}
int main()
{
    int n, p = 1, c, sum = 0, q;
    printf("Enter the number :\n");
    scanf("%d", &n);
    c = count(n);
    q = n;
    for (int j = 0; j < n; j++)
    {
        q = q % 10;
        sum = sum + power(q, c);
        p = p * 10;
        q = n / p;
        if (q == 0)
        {
            break;
        }
    }
    if (sum == n)
    {
        printf("The number is an Armstrong number.\n");
    }

    else
    {
        printf("The number is not an Armstrong number.\n");
    }
    return 0;
}