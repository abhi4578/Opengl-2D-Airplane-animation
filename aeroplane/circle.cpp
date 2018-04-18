#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<iostream>
#include "Primitives.h"
int x0,y00;
void circle(int R,int X,int Y);
void swap(int *x,int *y);
void Drawcircle(int x,int y);
void setPixel (int xMax, int yCoord,int xmin);


void setPixel (int xMax, int yCoord,int xmin)
{
 for ( ;xmin<=xMax;xmin++)   //just plot from xmin to xmax  of scanline no yCoord gives the colour filling
 {
    (*Transformation)(&xMax,&yCoord,X,Y);
     glColor3f(R,G,B);
     glBegin(GL_POINTS);
     glVertex2d(xmin,yCoord);
     glEnd();
 }
}

void Drawcircle(int x,int y)
{   //glColor3f(0.0,0.0,1.0);
    setPixel(x+x0,y+y00,-1*x+x0);      // xmax, scanline no. ,xmin -
    setPixel(y+x0,x+y00,-1*y+x0);
    setPixel(y+x0,-1*x+y00,-1*y+x0);
    setPixel(x+x0,-1*y+y00,-1*x+x0);
}

void circle(int R,int X,int Y)
{   x0=X;
    y00=Y;
    int x=0;
   int y=R;
    int d=5-4*R;
   while(x<y)
   { Drawcircle(x,y);
    if (d>=0)
     {
        d=d+8*(x-y)+20;
        y=y-1;
     }
     else
      d=d+8*x+12;
     x=x+1;
   }

glFlush();
}
