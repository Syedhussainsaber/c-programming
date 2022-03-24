#include<stdio.h>
#include<stdlib.h>
#include<string.h>
float saber(int a);
enum week_days{monday=5,tuesday,wednesday,thursday,friday,saturday,sunday};

typedef enum months{January,march,april,may} months;
int main()
{
    enum week_days day;
    day=thursday;
    printf("%u\n",day);
    months mon=march;
printf("%u\n",mon);
return 0;
} 