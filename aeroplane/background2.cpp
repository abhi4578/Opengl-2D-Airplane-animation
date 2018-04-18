#include<windows.h>
#include<stdio.h>
#include<GL\glut.h>
#include "Primitives.h"
#include "Background1.h"

void bushes(void);
void tower(void);
void tower(void)
{
// first building
R=0.42;
G=0.39;
B= 0.39;
int x1=0,x2=0,x3=110,x4=110,y1=100,y2=600,y3=600,y4=100;
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);

 x1=100,x2=100,x3=150,x4=150,y1=100,y2=250,y3=250,y4=100;
scanfill(50,50,50,125,75,125,75,50);
 //r=2 c=2
 x1=100,y1=350,x2=100,y2=450,x3=150,y3=450,x4=150,y4=350;
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);

 x1=100,y1=550,x2=100,y2=600,x3=150,y3=600,x4=150,y4=550;
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);

 x1=150,y1=100,x2=150,y2=600,x3=250,y3=600,x4=250,y4=100;
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);
// first building ends
// second building


R=0.435294; G=0.258824; B=0.258824;
x1=175,y1=50,x2=175,y2=350,x3=400,y3=350,x4=400,y4=50;// whole building
scanfill(x1,y1,x2,y2,x3,y3,x4,y4);
R= 0.9;
G= 0.91;
B=0.98;
x1=450,y1=120,x2=450,y2=200,x3=500,y3=200,x4=500,y4=120;// window, col=1 row=1
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);

x1=450,y1=240,x2=450,y2=320,x3=500,y3=320,x4=500,y4=240;//window, col=1 row=2
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);

x1=450,y1=440,x2=450,y2=520,x3=500,y3=520,x4=500,y4=440;//window, col=1 row=3
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);

x1=550,y1=120,x2=550,y2=200,x3=600,y3=200,x4=600,y4=120;//window, col=2 row=1
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);

x1=550,y1=240,x2=550,y2=320,x3=600,y3=320,x4=600,y4=240;//window, col=2 row=2
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);

x1=550,y1=440,x2=550,y2=520,x3=600,y3=520,x4=600,y4=440;//window, col=2 row=3
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);


x1=650,y1=240,x2=650,y2=320,x3=700,y3=320,x4=700,y4=240;//window, col=3 row=1
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);


x1=650,y1=120,x2=650,y2=200,x3=700,y3=200,x4=700,y4=120;//window, col=3 row=2
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);


x1=650,y1=440,x2=650,y2=520,x3=700,y3=520,x4=700,y4=440;//window, col=3 row=3
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);


x1=400,y1=600,x2=400,y2=650,x3=750,y3=650,x4=750,y4=600;// big window
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);

// second building ends
// third building

R=0.136863; G=0.255; B=0.37255;
x1=900,y1=100,x2=900,y2=500,x3=1800,y3=500,x4=1800,y4=100;// whole building
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);

R=1; G=1; B=1;
x1=1000,y1=150,x2=1000,y2=450,x3=1080,y3=450,x4=1080,y4=150;//first (big) window
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);



x1=1120,y1=150,x2=1120,y2=450,x3=1200,y3=450,x4=1200,y4=150;//first (big) window
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);


R=0.136863;G=0.255; B=0.37255;
x1=1000,y1=240,x2=1000,y2=260,x3=1200,y3=260,x4=1200,y4=240;//first (big) window
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);


R=0.136863; G=0.255; B=0.37255;
x1=1000,y1=340,x2=1000,y2=360,x3=1200,y3=360,x4=1200,y4=340;//first (big) window
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);


R=1; G=1; B=1;
x1=1300,y1=120,x2=1300,y2=200,x3=1350,y3=200,x4=1350,y4=120;// window, col=1 row=1
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);


x1=1300,y1=240,x2=1300,y2=320,x3=1350,y3=320,x4=1350,y4=240;//window, col=1 row=2
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);


x1=1400,y1=120,x2=1400,y2=200,x3=1450,y3=200,x4=1450,y4=120;//window, col=2 row=1
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);


x1=1400,y1=240,x2=1400,y2=320,x3=1450,y3=320,x4=1450,y4=240;//window, col=2 row=2
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);


x1=1500,y1=240,x2=1500,y2=320,x3=1750,y3=320,x4=1750,y4=240;//window, col=3 row=1
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);


x1=1500,y1=120,x2=1500,y2=200,x3=1750,y3=200,x4=1750,y4=120;//window, col=3 row=2
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);


R=0.136863; G=0.255; B=0.37255;
x1=1610,y1=110,x2=1610,y2=330,x3=1640,y3=330,x4=1640,y4=110;//window, col=3 row=1
scanfill(x1/2,y1/2,x2/2,y2/2,x3/2,y3/2,x4/2,y4/2);


}

void bushes(void)
    {
        tside_x1=0,tside_y1=0,tside_x2=0,tside_y2=50,tside_x3=960,tside_y3=50,tside_x4=960,tside_y4=0;
        R=0.133; G=0.545; B=0.133;
        scanfill_bushes(tside_x1,tside_y1,tside_x2,tside_y2,tside_x3,tside_y3,tside_x4,tside_y4);
        glFlush();
    }

void drawmountain(void) {
        R=0.5;G=0.35;B=0.05;
        scanfill(0,0,180,135,355,0,0,0);
        scanfill(365,0,780,270,960,0,365,0);
}
