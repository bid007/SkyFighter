#ifndef GLOBALVAR_H
#define GLOBALVAR_H
int beep=3;
AudioEngine Audio;
fighter object;
GLfloat x=0;
GLfloat y=0;
GLfloat z=0;
GLfloat angle=0;
GLfloat red=0;
GLfloat blue=0;
GLfloat green=0;
GLfloat alpha=0;
bool startGame=false;
bool lifeRemain=true;
GLfloat y_look=0;
int n=0;
fire shoot;


GLuint cubeList;
GLuint skyList;
GLuint objlist;
//#include"cubes.h"
cubes c,d,e,f,g,h,i,j,k;
//#include"skybox.h"
skyBox sky1;
//#include"text.h"
text t1;
text t2;
text t3;
text t4;
text t5;
text t6;
text t7;
text t8;
text t9;
firstScreen* screen1=new firstScreen;
firstScreen* screen2=new firstScreen;

showReport show;
void *font = GLUT_BITMAP_TIMES_ROMAN_24;
char* text[8]={"START NEW GAME","GAME INFO","QUIT","PRESS ENTER ","PRESS S TO MOVE THE GREEN MARKER","GAME OVER-ESC TO EXIT","LIFE","SCORE"};
int scoreCount=0;
char  holdScore[5];
GLfloat r1=0;
GLfloat g1=1;
GLfloat b1=0;

GLfloat r2=1;
GLfloat g2=1;
GLfloat b2=0;

GLfloat r3=0;
GLfloat g3=0;
GLfloat b3=1;
GLfloat camX=0;
GLfloat camY=0;
GLfloat camZ=0;
GLfloat cR=0;
GLfloat cG=0;
GLfloat cB=1;

GLfloat lightPos[4]  = {06.0, 06.0 ,06.0, 0.0};
GLfloat lightAmb[3]  = {0.2, 0.2,0.2};
GLfloat lightDiff[3] = {0.40, 0.40, 0.40};
GLfloat lightspec[3] = {0.5,0.5,0.5};
#endif
