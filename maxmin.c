#include <stdio.h>
#include <stdlib.h>
//#include<string.h>
int min();
int max();
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
  printf("Min number is %d\n", min(&a[0], n));
 printf("Max number is %d\n", max(&a[0], n));
    return 0;
}
int min(int *a, int n)
{
    int temp;
    for (int i = 0; (i+1) < n; i++)
    {
        if (a[i] < a[i + 1])
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
        else
        {
            continue;
        }
    }
    return a[n-1];
}
int max(int *a, int n)
{
    int temp;
    for (int i = 0; (i+1) < n; i++)
    {

        if (a[i] > a[i + 1])
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
        else
        {
            continue;
        }
    }
    return a[n-1];
}