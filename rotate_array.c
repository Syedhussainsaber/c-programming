#include <stdio.h>
#include <stdlib.h>
//#include<string.h>
int rotate_num(int n,int arr[n],int brr[n],int x)
{
   int temp;
    for (int j = 0; j < (n - x); j++)
    {
        temp = arr[x + j];
        arr[j] = temp;
    }
    for (int i = 0; i < x; i++)
    {
        temp = brr[i];
        arr[n - x + i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 0;
}
int main()
{
    int n, x, temp;
    scanf("%d", &n);
    int arr[n], brr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
    printf("\n");
    scanf("%d", &x);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[i];
    }
rotate_num(n,arr,brr,x);   
    return 0;
}