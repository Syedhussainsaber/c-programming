#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
#include<math.h>
#define PI 3.141592654
float Edistance(int x1,int y1,int x2,int y2)
{
 return sqrt((((x2-x1) * (x2-x1))+((y2-y1) * (y2-y1))));
}
float Area_of_circle(float x1,float y1,float x2,float y2,float (*distance)(int,int,int,int))
{
float d=(*distance)(x1,y1,x2,y2);
printf("The Area of the Circle is : %0.3f\n",(PI * d * d));
return 0;
}
int main()
{
int  x1,x2,y1,y2;
printf("Enter the First point :\n");
scanf("%d%d",&x1,&y1);
printf("Enter the Second point :\n");
scanf("%d%d",&x2,&y2);
Edistance(x1,y1,x2,y2);
float (*distance)(int,int,int,int);
distance=&Edistance;
Area_of_circle(x1,y1,x2,y2,distance);
return 0;
}