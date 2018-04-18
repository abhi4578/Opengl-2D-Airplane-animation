//not smooth motion,move white strips,clouds
#include<windows.h>
#include<stdio.h>
#include<GL\glut.h>
#include "Primitives.h"
#include "Background1.h"

int right=0,b=0,up=0,d=0,e=0;
int flag=0;
void background1();
void background2();
void plane();
void display();
void update();
void myinit();
void background3();
void plane(void)
{

//rectangular body
R=1;G=1;B=1;
scanfill10(40,90,200,90,220,75,200,75,60,75);
// right wing
R=1;G=0;B=0;
scanfill_bushes(69,62,120,82,160,82,70,62);
scanfill_bushes(69,90,120,90,160,90,70,95);
scanfill3(40,90,40,100,70,90);
}

void update(int value)
{  if(flag==3 && up<=50)
    ;
    else
	{right+=30;	//Plane position takeoff on x axis
	b-=12;	//Road Strip backward movement
    d=right/5;}
	if(flag==0 &&right>175 && up <400 )
    {
        up+=25;
    }  //take off at certain angle on y axis
    if (flag==3&& up>10)
    { up-=20;

    }
	if(b<=-100)// moving of run way
		b=0;
	glutPostRedisplay();
	glutTimerFunc(16,update,0);//delay
}


void display(void)
{
static float i=0;
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(0.854,0.964,0.933,0.5);
if (flag==0 || flag==3)
background1();
else if(flag==1)
    background2();
else if(flag==2)
    background3();

drawsun(flag);
drawcloud();
Transformation=&Translation;
X=right; Y=up;

if(flag==0 && up<=375 && right >175)
{X1=0; Y1=0;
angle=i*M_PI/180;
if(i<3)
i+=0.5;
else
    i=0;
}

if(flag==3 && up >10 && right > 50)
{X1=0; Y1=0;
angle=i*M_PI/180;
if(i>-3.0)
i-=0.5;

}

plane();
angle=0;
X1=0; Y1=0;
X=0; Y=0;
if(right>SCREEN_WIDTH-62)//window position during take off
 { flag++;
    right=0.0;
	b=0.0;
}
glFlush();
glutSwapBuffers();
}
void background1()
{
runaway();
stripes();

bottomsideBushes();
topsideBushes();
tower(flag);
airport(flag);
}

void background2()
{
bushes();
tower();
}
void background3()
{
    drawmountain();
}
void Specialkey(int key, int x, int y)
{
switch(key)
{

case GLUT_KEY_UP: up+=40;
                 break;
case GLUT_KEY_DOWN:
                    up-=40;
                    break;
case GLUT_KEY_LEFT:
                    break;
case GLUT_KEY_RIGHT:
                    right+=60;
                    break;
}
glutPostRedisplay();
}

void myinit()
{

//glClearColor(0.0f,0.0f,1.0f,0.0f);
glClearColor(0.854,0.964,0.933,0.5);
glColor3f(1.0,0.0,0.0);
glPointSize(1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,960,0.0,540.0);

}


int main(int argc, char* argv[])
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);
glutInitWindowSize(SCREEN_WIDTH,SCREEN_HEIGHT);
glutInitWindowPosition(0,0);
glutCreateWindow("Airplane Takeoff computer graphics projects");
glutDisplayFunc(display);
myinit();
//glutIdleFunc(display);
glutSpecialFunc(Specialkey);
glutTimerFunc(100,update,0);
glutMainLoop();
return 0;
}
