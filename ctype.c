#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
char str[]="SABER AND SADIQ";
for(int i=0;str[i]!='\0';i++)
{
printf("%c",tolower(str[i]));
}
printf("\n");
return 0;
}