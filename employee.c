#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
//dynamic memory allocation
//Abc pvt ltd.manages employee records of other companies
//Employee id can be of any length and it can contain any character
//for 3 employeees you have to take 'length of the employee id' as an input and display it on screen.
//
char *employee_id1,*employee_id2,*employee_id3;
int n,m,p;
printf("Employee 1 :\n");
printf("Enter the no of characters in your employee id :\n");
scanf("%d",&n);
employee_id1=(char *)malloc(n*sizeof(char));
scanf("%s",(employee_id1));
printf("Employee 2 :\n");
printf("Enter the no of characters in your employee id :\n");
scanf("%d",&m);
employee_id2=(char *)malloc(m*sizeof(char));
scanf("%s",(employee_id2));
printf("Employee 3 :\n");
printf("Enter the no of characters in your employee id :\n");
scanf("%d",&p);
employee_id3=(char *)malloc(p*sizeof(char));
scanf("%s",(employee_id3));
printf("Employee 1 :\nHis employee id is %s\n",employee_id1);
printf("Employee 2 :\n His employee id is %s\n",employee_id2);
printf("Employee 3 :\nHis employee id is %s\n",employee_id3);

return 0;
}