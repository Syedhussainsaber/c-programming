#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int game(int x,char *ptr)
    {  // printf("Enter the case value :\n");
//scanf("%d",&x);
char *scissors;
int p=0,b=0;
scissors=(char *)malloc(9*sizeof(char));
printf("\n\t\t\tGAME STARTED\n\nNow You can play..!\n");
for(int i=0;i<3;i++)
{
printf("\n\n%s :\n",ptr);   
scanf("%s",scissors);
if(strcmp(scissors,"rock")==0)
{
    scissors=(char *)realloc(scissors,5*sizeof(char));
}
if(strcmp(scissors,"paper")==0)
{
    scissors=(char *)realloc(scissors,7*sizeof(char));
}

srand(time(NULL));
x=rand()%(3);
switch (x)
{
    case 0: printf("\nComputer : \nRock\n");
    break;
    case 1: printf("\nComputer : \nPaper\n");
    break;
    case 2: printf("\nComputer : \nScissors\n");
    break;
}
 if((strcmp(scissors,"rock")==0)&&(x==1))
 {
printf("\nComputer Gets 1 Point\n");
p++;
printf("\n\t\t%s's score : %d\n\t\tComputer's score : %d",ptr,b,p);
 }
 else if((strcmp(scissors,"paper")==0)&&(x==2))
 {
    printf("\nComputer Gets 1 Point\n"); 
    p++;
    printf("\n\t\t%s's score : %d\n\t\tComputer's score : %d",ptr,b,p);
 }
 else if((strcmp(scissors,"scissors")==0)&&(x==0))
 {
      printf("\nComputer Gets 1 Point\n"); 
    p++;
    printf("\n\t\t%s's score : %d\n\t\tComputer's score : %d",ptr,b,p);
 }
 else if(((strcmp(scissors,"rock")==0)&&(x==0))||((strcmp(scissors,"paper")==0)&&(x==1))||((strcmp(scissors,"scissors")==0)&&(x==2)))
 {
printf("\nNo One Gets The Point\n");
printf("\n\t\t%s's score : %d\n\t\tComputer's score : %d",ptr,b,p);
 }
 else
 {
     printf("\n%s Gets 1 Point\n",ptr);
 b++;
 printf("\n\t\t%s's score : %d\n\t\tComputer's score : %d",ptr,b,p);
 }
}
if(p<b)
{
    printf("\n\n\t\t\tCongrats %s You WON 🎉🎉🎉\n\n\t\tGame Over...\n",ptr);
}
else if(p>b)
{
printf("\n\n\t\t\tSorry You Lost The Game ☹️☹️☹️\n\n\t\tGame Over...\n");
}
else
{
    printf("\n\n\t\t\tGame Is Tied 😬😬😬\n\n\t\tGame Over...\n");
}
free(scissors);
   return 0;
    }
    
int main()
{
    char *ptr;
   char s,d='y';
    int n,a;
printf("\n\t\t\t\tWelcome to the game...!\n");
printf("\nEnter the no of characters in the name of player1 :\n");
scanf("%d",&a);
ptr=(char *)malloc((a+1)*sizeof(char));
printf("Enter the name of the player1 :\n");
scanf("%s",ptr);
getchar();
while((d=='y')||(d=='Y'))
{
printf("\n\t\t\tPlayer1 : %s\n\t\t\tPlayer2 : Computer\n",ptr);
printf("\nEnter any key to start the game...!\n");
scanf("%c",&s);
game(n,ptr);
getchar();
printf("\nDo you want to play again ? (Enter y for Yes and n for No)\n");
scanf("%c",&d);
getchar();
if((d=='n')||(d=='N'))
{
printf("\n\t\t\tBYE🖐🏻🖐🏻🖐🏻\n");
}
}
return 0;
}