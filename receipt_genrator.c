#include<stdio.h>
void item(char *item_)
{
printf("Enter the item , he has taken :\n");
scanf("%s",item_);
}
void name(char *name_)
{
printf("Enter the customer's name :\n");
scanf("%s",name_);
}
void outlet(char *outlet_)
{
printf("Enter the name of the outlet :\n");
scanf("%s",outlet_);
}
int main()
{
FILE *ptr=NULL;
char str[90],name_[30],item_[20];
char outlet_[30];
name(name_);
item(item_);
outlet(outlet_);
ptr=fopen("letter.txt","w");
fputs("Thanks {",ptr);
fprintf(ptr,"%s",name_);
fputs("} for purchasing {",ptr);
fprintf(ptr,"%s",item_);
fputs("} from our outlet {",ptr);
fprintf(ptr,"%s",outlet_);
fputs("}.\nPlease visit our outlet {",ptr);
fprintf(ptr,"%s",outlet_);
fputs("} for any kind of problems.\nWe plan to serve you again soon...!\n",ptr);
fclose(ptr);
ptr=fopen("letter.txt","r");
fgets(str,100,ptr);
printf("%s",str);
fgets(str,100,ptr);
printf("%s",str);
fgets(str,50,ptr);
printf("%s",str);
fclose(ptr);
return 0;
}