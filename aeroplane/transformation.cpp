#include <stdlib.h>
#include <math.h>
#include<iostream>
#include "Primitives.h"
void Translation(int *x,int *y,int X,int Y);
void Rotation(int *x,int *y,int X,int Y);
void Scaling(int *x,int *y,int Sx,int Sy);
void MatrixMultiplication(float m[3][3],int *cord[3][1]);

void MatrixMultiplication(float m[3][3],int *cord[3][1])
{ int i,k,sum=0;
    float x[2][1];
  for(i=0;i<3;i++)
  { sum=0;
    for(k=0;k<3;k++)
    { sum+=m[i][k]*(*cord[k][0]);

    }
     x[i][0]=sum;
  }
  *cord[0][0]=round(x[0][0]);
  *cord[1][0]=round(x[1][0]);
  *cord[2][0]=round(x[2][0]);
}
void Rotation(int *x,int *y,int X,int Y)
{ Translation(x,y,-1*X,-1*Y);
   float m[3][3]={{cos(angle),-1*sin(angle),0},{sin(angle),cos(angle),0},{0,0,1}};
  int W=1;
  int *w=&W;
  int *cord[3][1]={{x},{y},{w}};
  MatrixMultiplication(m,cord);
 Translation(x,y,X,Y);
}
void Translation(int *x,int *y,int X,int Y)
{  float m[3][3]={{1,0,X},{0,1,Y},{0,0,1}};
  int W=1;
  int *w=&W;
  int *cord[3][1]={{x},{y},{w}};
  MatrixMultiplication(m,cord);

}
void Scaling(int *x,int *y,int Sx,int Sy)
{  float m[3][3]={{Sx,0,0},{0,Sy,0},{0,0,1}};
  int W=1;
  int *w=&W;
  int *cord[3][1]={{x},{y},{w}};
  MatrixMultiplication(m,cord);

}
