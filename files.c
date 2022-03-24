#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
int main()
{
FILE *ptr=NULL;
ptr=fopen("saber.text","w");
char str[50]="\nHow are You ?,\n What is your name ?";
fprintf(ptr,"%s",str);
//fscanf(ptr,"%s",str);
printf("%s\n",str);
//puts(str);
//gets(str);
fclose(ptr);
return 0;
}