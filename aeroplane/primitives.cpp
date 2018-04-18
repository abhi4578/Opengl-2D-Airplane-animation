#include <stdlib.h>
#include <math.h>
#include<windows.h>
#include<stdio.h>
#include<GL\glut.h>
#include<iostream>
#include "Primitives.h"
int X=0;
int Y=0;
int X1=0;
int Y1=0;
float R,G,B;
float angle=0;
void (*Transformation)(int *,int *,int,int)=&Translation;
void (*Transformation2)(int *,int *,int,int)=&Rotation;
void Polygon(int (*xy)[2],int n);
void SetPixel(int xCoord,int yCoord);
void Bresenhams (int x0,int y00,int xEnd,int yEnd);
float PreProcess(int *x0,int *y00,int *xEnd,int *yEnd);
void swap(int *x,int *y);
void PostProcess(int xCoord, int yCoord,float m);

void SetPixel(int xCoord,int yCoord)
{            (*Transformation)(&xCoord,&yCoord,X,Y);
             (*Transformation2)(&xCoord,&yCoord,X1,Y1);
            glColor3f(R,G,B);
            glBegin(GL_POINTS);
            glVertex2i(xCoord,yCoord);
            glEnd();

}

void Polygon(int (*xy)[2],int n)
{int i;
for(i=0;i<n;i++)
{
    Bresenhams(*(*(xy+i)+0),*(*(xy+i)+1),*(*(xy+(i+1)%n)+0),*(*(xy+(i+1)%n)+1));
}
glFlush();
}

void PostProcess(int xCoord,int yCoord,float m)
{
 if(m<=1.0 && m>=0)
 {
 SetPixel(xCoord, yCoord);

 }
 else if(m>1.0)
 {
 SetPixel(yCoord, xCoord);

 }
 else if(m>-1.0 && m<0)
 { yCoord=-1*yCoord;

 SetPixel(xCoord, yCoord);

 }
 else if(m<=-1.0)
 { yCoord=-1*yCoord;

SetPixel(yCoord, xCoord);

 }


}
void swap(int *x,int *y)
{int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
float PreProcess(int *x0,int *y00,int *xEnd,int *yEnd)
{ float m;
if (*xEnd-*x0==0)
m=48;
else
m=(float)(*yEnd-*y00)/(*xEnd-*x0);
   if (m>1)
   { swap(yEnd,xEnd);
     swap(y00,x0);
   }
   else if(m>-1 && m<0)
   { *y00=-1*(*y00);
     *yEnd=-1*(*yEnd);
   }
   else  if(m<=-1)
   { swap(yEnd,xEnd);
     swap(y00,x0);
     *y00=-1*(*y00);
     *yEnd=-1*(*yEnd);
   }
if(*x0>*xEnd)
{ swap(x0,xEnd);
  swap(y00,yEnd);
}

return m;
}

void Bresenhams (int x0,int y00,int xEnd,int yEnd)
{ float m=PreProcess(&x0,&y00,&xEnd,&yEnd);
 //  cout<<"hi";
  int dx=xEnd -x0;
   int dy=yEnd-y00;
   int x=x0,y=y00;
  int dne=2*(dy-dx);
  int de=2*dy;
  int d=2*dy-dx;
  //cout<<xEnd;
  for(;x<=xEnd;x++)
  { //cout<<x;
    PostProcess(x,y,m);
    if(d>0)
    {
        y=y+1;
        d=d+dne;
    }
    else
     d=d+de;
  }
}


