#include <stdlib.h>
#include <math.h>
#include<windows.h>
#include<stdio.h>
#include<GL\glut.h>
#include<iostream>
#include "Primitives.h"

void Edgedetect(float x1,float y1,float x2,float y2,int *le,int *re)
{
            float mx,x,temp;
            int i;
            if((y2-y1)<0)
            {
              temp=x1;x1=x2;x2=temp;
              temp=y1;y1=y2;y2=temp;
            }
              if((y2-y1)!=0)
                        mx=(x2-x1)/(y2-y1);
            else
                        mx=x2-x1;
            x=x1;
            for(i=y1;i<y2;i++)
            {
                        if(x<le[i])
                                    le[i]=x;
                        if(x>re[i])
                                    re[i]=x;
                        x+=mx;
            }
}



void scanfill(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4)
{
            int le[SCREEN_WIDTH],re[SCREEN_HEIGHT];
            int i,y;
            for(i=0;i<SCREEN_WIDTH;i++)
            {
                        le[i]=SCREEN_WIDTH;
                        re[i]=x2;
            }
            Edgedetect(x1,y1,x2,y2,le,re);
            Edgedetect(x2,y2,x3,y3,le,re);
            Edgedetect(x3,y3,x4,y4,le,re);
            Edgedetect(x4,y4,x1,y1,le,re);
for(y=0;y<SCREEN_HEIGHT;y++)
{
           if(le[y]<=re[y])
                        for(i=le[y]+1;i<re[y];i++)
                                    SetPixel(i,y);
}
}
void scanfill_bushes(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4)
{
            int le[SCREEN_WIDTH],re[SCREEN_HEIGHT];
            int i,y;
            for(i=0;i<SCREEN_WIDTH;i++)
            {
                        le[i]=SCREEN_WIDTH;
                        re[i]=x1;
            }
            Edgedetect(x1,y1,x2,y2,le,re);
            Edgedetect(x2,y2,x3,y3,le,re);
            Edgedetect(x3,y3,x4,y4,le,re);
            Edgedetect(x4,y4,x1,y1,le,re);
for(y=0;y<SCREEN_HEIGHT;y++)
{
           if(le[y]<=re[y])
                        for(i=le[y]+1;i<re[y];i++)
                                    SetPixel(i,y);
}
}

void scanfill10(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4,float x5,float y5)
{
            int le[SCREEN_WIDTH],re[SCREEN_HEIGHT];
            int i,y;
            for(i=0;i<SCREEN_WIDTH;i++)
            {
                        le[i]=SCREEN_WIDTH;
                        re[i]=x2;
            }
            Edgedetect(x1,y1,x2,y2,le,re);
            Edgedetect(x2,y2,x3,y3,le,re);
            Edgedetect(x3,y3,x4,y4,le,re);
            Edgedetect(x4,y4,x5,y5,le,re);
            Edgedetect(x5,y5,x1,y1,le,re);
for(y=0;y<SCREEN_HEIGHT;y++)
{
           if(le[y]<=re[y])
                        for(i=le[y]+1;i<re[y];i++)
                                    SetPixel(i,y);
}
}

void scanfill3(float x1,float y1,float x2,float y2,float x3,float y3)
{
            int le[SCREEN_WIDTH],re[SCREEN_HEIGHT];
            int i,y;
            for(i=0;i<SCREEN_WIDTH;i++)
            {
                        le[i]=SCREEN_WIDTH;
                        re[i]=x2;
            }
            Edgedetect(x1,y1,x2,y2,le,re);
            Edgedetect(x2,y2,x3,y3,le,re);
            Edgedetect(x3,y3,x1,y1,le,re);
           // Edgedetect(x4,y4,x5,y5,le,re);
            //Edgedetect(x5,y5,x1,y1,le,re);
for(y=0;y<SCREEN_HEIGHT;y++)
{
           if(le[y]<=re[y])
                        for(i=le[y]+1;i<re[y];i++)
                                    SetPixel(i,y);
}
}
