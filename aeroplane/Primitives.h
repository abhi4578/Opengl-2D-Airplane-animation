#ifndef __Primitives_H_INCLUDED__
#define  __Primitives_H_INCLUDED__
#define M_PI  3.14159265358979323846
#define SCREEN_WIDTH 960
 #define SCREEN_HEIGHT 540
extern void Polygon(int (*xy)[2],int n); //store points in 2D array - array[no. of points][2],pass &array[0],n-no. of points
extern void Translation(int *x,int *y,int X,int Y); //
extern void Rotation(int *x,int *y,int X,int Y);   // X,Y- rotation about that point,set X,Y,angle
extern void Scaling(int *x,int *y,int Sx,int Sy); //x,y-coordinates, Sx-x scaling,Sy- y scaling,set X(Sx),Y(Sy)
extern void (*Transformation)(int *,int *,int,int); //functional pointer to pointer desired transformation function,set X and Y
extern int X;  //X,Y,angle(in degrees) - parameters to be set while doing transformation
extern int Y;
extern int X1;
extern int Y1;
extern float R;
extern float G;
extern float B;
extern float angle;
extern void (*Transformation2)(int *,int *,int,int);
extern void SetPixel(int xCoord,int yCoord);//to plot(x,y)
extern void Bresenhams (int x0,int y00,int xEnd,int yEnd); //(x0,y00),(x00,y00) are end points
extern void circle(int R,int X,int Y); //(X,Y)-centre,R-radius
extern void scanfill(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4);
extern void scanfill_bushes(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4);
extern void scanfill10(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4,float x5,float y5);
extern void scanfill3(float x1,float y1,float x2,float y2,float x3,float y3);
extern void setPixel (int xMax, int yCoord,int xmin);
extern int a;
extern int b;
extern int c;
extern int d;
#endif

