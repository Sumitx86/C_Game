#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
int a[3][3],b,c,d,i,j;
int xc=50,yc=50,r=30;
int x[15],y[15];

void drawcircles()
{
setcolor(YELLOW);
circle(xc,yc,r);
circle(xc,yc,r+5); }

main()
{
double angle=0,v=1,theta;
int a[20][20],b[20][20],c,d,i,s=0,k,j,z[45];
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\turboc3\\bgi");

setcolor(YELLOW);
line(50,50,260,50);
line(50,260,260,260);
line(50,50,50,260);
line(260,50,260,260);
line(120,50,120,260);
line(190,50,190,260);
line(50,120,260,120);
line(50,190,260,190);

getch();
}

