#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *replace_word(const char *str,const char *newWord,const char *oldWord)
{
int i=0,count=0;
int NewWordLength=strlen(newWord);
int OldWordLength=strlen(oldWord);
for(i=0;str[i]!='\0';i++)
{
    if(strstr((str+i),oldWord)==&str[i])
    {
        count++;
        i+=OldWordLength-1;
    }
}
char *replacedString;
replacedString=(char *)malloc(i+count*(OldWordLength-NewWordLength)+1);
i=0;
while(*str!='\0')
{
    if(strstr(str,oldWord)==str)
    {
        strcpy(&replacedString[i],newWord);
        i+=NewWordLength;
        str+=OldWordLength;
    }
    else
{
    replacedString[i]=*str;
    i+=1;
    str+=1;
}
}
replacedString[i]='\0';
return replacedString;
}
int main()
{
FILE *ptr1=NULL;
FILE *ptr2=NULL;
char str[201];
ptr1=fopen("bill.txt","r");
fgets(str,200,ptr1);
printf("Before :\n%s\n",str);
ptr2=fopen("receipt.txt","w");
char *newstr;
newstr=replace_word(str,"Saber","{name}");
newstr=replace_word(newstr,"Macbook","{item}");
newstr=replace_word(newstr,"I Phone Digital","{outlet}");
fprintf(ptr2,"%s",newstr);
printf("Present :\n%s\n",newstr);
fclose(ptr1);
fclose(ptr2);
return 0;
}