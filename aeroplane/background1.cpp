#include<windows.h>
#include<GL/glut.h>
#include<stdio.h>
#include "Primitives.h"
#include "Background1.h"
float x1,y1,x2,y2,x3,y3,x4,y4;
float div_x1,div_y1,div_x2,div_y2,div_x3,div_y3,div_x4,div_y4;
float bside_x1,bside_y1,bside_x2,bside_y2,bside_x3,bside_y3,bside_x4,bside_y4;
float tside_x1,tside_y1,tside_x2,tside_y2,tside_x3,tside_y3,tside_x4,tside_y4;
float tower_base_x1,tower_base_y1,tower_base_x2,tower_base_y2,tower_base_x3,tower_base_y3,tower_base_x4,tower_base_y4;
float tower_top_x1,tower_top_y1,tower_top_x2,tower_top_y2,tower_top_x3,tower_top_y3,tower_top_x4,tower_top_y4;
float tower_ant_x1,tower_ant_y1,tower_ant_x2,tower_ant_y2,tower_ant_x3,tower_ant_y3,tower_ant_x4,tower_ant_y4;
float tx1,ty1,tx2,ty2,tx3,ty3,tx4,ty4;

float air_x1,air_y1,air_x2,air_y2,air_x3,air_y3,air_x4,air_y4;


void runaway(void)
{
    x1=0,y1=50,x2=0,y2=300,x3=1920,y3=300,x4=1920,y4=50;
    R=0; G=0;B=0;
    scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);
    glFlush();
}
void stripes()
{
    div_x1=0,div_x2=20,div_x3=140,div_x4=120;
    div_y1=160,div_y2=190,div_y3=190,div_y4=160;
    R=0.753;
    G=0.753;
    B=0.753;
    scanfill(div_x1/2,div_y1/2,div_x2/2,div_y2/2,div_x3/2,div_y3/2,div_x4/2,div_y4/2);
    int k=0;
    while(k<7)
    {
        div_x1+=250,div_x2+=250,div_x3+=250,div_x4+=250;
        scanfill(div_x1/2,div_y1/2,div_x2/2,div_y2/2,div_x3/2,div_y3/2,div_x4/2,div_y4/2);
        k++;


    }
    glFlush();

}
    void bottomsideBushes(void)
    {
        bside_x1=0,bside_y1=0,bside_x2=0,bside_y2=50,bside_x3=1920,bside_y3=50,bside_x4=1920,bside_y4=0;
        R=0.133;G=0.545;B=0.133;
        scanfill(bside_x1/2,bside_y1/2,bside_x2/2,bside_y2/2,bside_x3/2,bside_y3/2,bside_x4/2,bside_y4/2);
        glFlush();
    }
    void topsideBushes(void)
    {   R=0.133;G=0.545; B=0.133;
        tside_x1=0,tside_y1=300,tside_x2=0,tside_y2=350,tside_x3=1920,tside_y3=350,tside_x4=1920,tside_y4=300;
        scanfill_bushes(tside_x1/2,tside_y1/2,tside_x2/2,tside_y2/2,tside_x3/2,tside_y3/2,tside_x4/2,tside_y4/2);
        glFlush();
    }

    void tower(int flag)
    {
        //Base of tower
        R=0.541;G=0.541;B=0.458;
        if(!flag)
        tower_base_x1=1700,tower_base_x2=1700,tower_base_x3=1830,tower_base_x4=1830,tower_base_y1=350,tower_base_y2=650,tower_base_y3=650,tower_base_y4=350;
        else
            tower_base_x1=200,tower_base_x2=200,tower_base_x3=330,tower_base_x4=330,tower_base_y1=350,tower_base_y2=650,tower_base_y3=350,tower_base_y4=650;
        scanfill_bushes(tower_base_x1/2,tower_base_y1/2,tower_base_x2/2,tower_base_y2/2,tower_base_x3/2,tower_base_y3/2,tower_base_x4/2,tower_base_y4/2);
        //Top of Tower
        if(!flag)
        tower_top_x1=1680,tower_top_x2=1680,tower_top_x3=1850,tower_top_x4=1850,tower_top_y1=630,tower_top_y2=700,tower_top_y3=700,tower_top_y4=630;
        else
        tower_top_x1=180,tower_top_x2=180,tower_top_x3=350,tower_top_x4=350,tower_top_y1=630,tower_top_y2=700,tower_top_y3=700,tower_top_y4=630;
        R=0.541;G=0.541;B=0.458;

        scanfill(tower_top_x1/2,tower_top_y1/2,tower_top_x2/2,tower_top_y2/2,tower_top_x3/2,tower_top_y3/2,tower_top_x4/2,tower_top_y4/2);
        //Blue part of top
        if(!flag)
        tx1=1680,ty1=655,tx2=1680,ty2=675,tx3=1850,ty3=675,tx4=1850,ty4=655;
        else
        tx1=180,ty1=655,tx2=180,ty2=675,tx3=350,ty3=675,tx4=350,ty4=655;
        R=0; G=0;  B=0.804;
        scanfill(tx1/2,ty1/2,tx2/2,ty2/2,tx3/2,ty3/2,tx4/2,ty4/2);
        //Antenna of tower
        if (!flag)
        tower_ant_x1=1755,tower_ant_x2=1755,tower_ant_x3=1780,tower_ant_x4=1780,tower_ant_y1=700,tower_ant_y2=770,tower_ant_y3=770,tower_ant_y4=700;
        else
         tower_ant_x1=255,tower_ant_x2=255,tower_ant_x3=280,tower_ant_x4=280,tower_ant_y1=700,tower_ant_y2=770,tower_ant_y3=770,tower_ant_y4=700;
        R=0.541;G=0.541;B=0.458;
        scanfill(tower_ant_x1/2,tower_ant_y1/2,tower_ant_x2/2,tower_ant_y2/2,tower_ant_x3/2,tower_ant_y3/2,tower_ant_x4/2,tower_ant_y4/2);

        glFlush();

    }

    void airport(int flag)
    {    if(!flag)
        {air_x1=0,air_x2=0,air_x3=1330,air_x4=1330;
        air_y1=350,air_y2=550,air_y3=550,air_y4=350;}
        else
        {
        air_x1=700,air_x2=700,air_x3=1920,air_x4=1920;
        air_y1=350,air_y2=550,air_y3=550,air_y4=350;
        }
        R=0.541;G=0.541;B=0.458;
        scanfill(air_x1/2,air_y1/2,air_x2/2,air_y2/2,air_x3/2,air_y3/2,air_x4/2,air_y4/2);

        //airport window
        if(!flag)
        {air_x1=0,air_x2=0,air_x3=1300,air_x4=1300;
        air_y1=450,air_y2=530,air_y3=530,air_y4=450;}
        else
        {
            air_x1=730,air_x2=730,air_x3=1920,air_x4=1920;
        air_y1=450,air_y2=530,air_y3=530,air_y4=450;
        }
        R=0;G=0;B=0.804;
        scanfill(air_x1/2,air_y1/2,air_x2/2,air_y2/2,air_x3/2,air_y3/2,air_x4/2,air_y4/2);



    }




void drawcloud()
{

    R=0.852941;
    G=0.852941;
    B=0.852941;
    int i,j;
     for(j=0;j<2;j++)
        {circle(25,150+j-d,450);
         circle(25,170+j-d,450);
         circle(25,130+j-d,450);
         circle(25,195+j-d,460);
         circle(25,195+j-d,440);
         circle(25,195+j-d,460);
         circle(25,155+j-d,460);
        }

     for(j=0;j<2;j++)
     {
         circle(25,25+j-d,400);
         circle(25,90+j-d,400);
         circle(25,10+j-d,400);
         circle(25,40+j-d,410);
         circle(25,40+j-d,390);
         circle(25,60+j-d,410);
         circle(25,60+j-d,390);
     }

     for(j=0;j<2;j++)
     {
         circle(25,675+j-d,400);
         circle(25,690+j-d,400);
         circle(25,655+j-d,450);
         circle(25,620+j-d,410);
         circle(25,620+j-d,440);
         circle(25,630+j-d,460);
         circle(25,630+j-d,440);
     }

    for(j=0;j<2;j++)
    {
         circle(25,325+j-d,400);
         circle(25,345+j-d,400);
         circle(25,305+j-d,400);
         circle(25,320+j-d,410);
         circle(25,320+j-d,390);
         circle(25,330+j-d,410);
         circle(25,330+j-d,390);

    }

    for(j=0;j<2;j++)
    {    circle(25,375+j-d,450);
         circle(25,395+j-d,450);
         circle(25,355+j-d,450);
         circle(25,370+j-d,460);
         circle(25,370+j-d,440);
         circle(25,380+j-d,920);
         circle(25,380+j-d,440);
    }

    for(j=0;j<2;j++)
    {   circle(25,475+j-d,400);
         circle(25,495+j-d,400);
         circle(25,455+j-d,400);
         circle(25,470+j-d,410);
         circle(25,470+j-d,390);
         circle(25,480+j-d,410);
         circle(25,480+j-d,390);

    }

}

void drawsun(int flag)
{
    int i,j;
    R=1;G=1;B=0.2;
    if (!flag)
        i=1650/2;
    else
        i=200/2;
    for(j=0;j<2;j++)
        circle(70/2,i+j,950/2);

}
