#include"header.h"
#include "imageloader.h"
#include "obj.h"
#include "texGen.h"
#include "cubes.h"
#include "skyBox.h"
#include "firstScreen.h"
#include "text.h"
#include "initFunc.h"
#include "report.h"
#include "AudioEngine.h"
#include "fire.h"
#include "globalVar.h"
#include "collision.h"
#define PI 3.1416
static int track=0;
int colliTrack=0;
collision colli;
bool beginFire;
void genSkyList(){
    skyList=glGenLists(1);
    glNewList(skyList,GL_COMPILE);
    glPushMatrix();
    glTranslatef(-camX,-camY,-camZ);
	sky1.createSkyBox(_textureId[10]);
	glPopMatrix();
	glEndList();
}

void screen(){
    glPushMatrix();
	glColor3f(r1,g1,b1);
    t1.renderBitmapString(-0.4,0,1,(void *)font,text[0]);
    glPopMatrix();
    glPushMatrix();
	glColor3f(r2,g2,b2);
    t2.renderBitmapString(-0.30,-0.25,1,(void *)font,text[1]);
    glPopMatrix();
    glPushMatrix();
	glColor3f(r3,g3,b3);
    t3.renderBitmapString(-0.20,-0.5,1,(void *)font,text[2]);
    glPopMatrix();
    glPushMatrix();
	glColor3f(0,1,1);
    t4.renderBitmapString(-1.1,-0.75,1,(void *)font,text[beep]);
    glPopMatrix();
    glColor4f(0,1,1,0);
    t5.renderBitmapString(-1.1,-0.85,1,(void *)font,text[4]);
    glPopMatrix();
    glColor3f(1,1,1);
    glPushMatrix();
    screen1->screenRect(1.5,_textureId[8],0,0,0,1,1,1);
    glPopMatrix();
    if(track==1){
    glPushMatrix();
    screen2->screenRect(1,_textureId[9],0,0.55,0.5,1,0.5,1);
    glPopMatrix();}

}

void getObj(){

    //glNewList(objlist,GL_COMPILE);
    glPushMatrix();
    glRotatef(angle,0,0,1);
    glTranslatef(-camX,-camY,-camZ);
    object.objWithTexture(_textureId[0],object.xpos,object.ypos,object.zpos);
    //glColor3f(1,0,0);
    glPopMatrix();
    //glEndList();
}

void genCubeList(){
    cubeList=glGenLists(1);
    glNewList(cubeList,GL_COMPILE);
    glPushMatrix();
    glTranslatef(-camX,-camY,-camZ);
   // c.setValue(0,1,-40);
    c.Disp1();
    d.Disp2();
    e.Disp3();
    f.Disp4();
    g.Disp5();
    h.Disp6();
    i.Disp7();
    j.Disp8();
    k.Disp9();
	glPopMatrix();
	glEndList();

}
 void cleanup()
 {
     delete screen1;
     delete screen2;
 }



void keyboard(unsigned char key, int x, int y) {
glutPostRedisplay();
    if(key==13&&track==2||key==27)
    {
        cleanup();
        exit(0);
    }
    if(key==13&&track==0)
    {
        startGame=true;
    }
	 if(key=='s'){
        track++;
        if(track==1){g1=0;r1=1;r2=0;b2=0;g2=1;}
        if(track==2){g1=0;r1=1;r2=1;b2=0;g2=1;b3=0;g3=1;}
        if(track==3){g1=1;r1=0;b3=1;g3=0;track=0;}
    }
    if(key=='i'){angle+=0.1;}//beginFire=true;}
    if(key=='o'){angle-=0.1;}
    if(key=='f'){beginFire=true;}
}

void keyboardUp(unsigned char key, int x, int y){
    glutPostRedisplay();
    if(key=='i'){
        angle=0;
    }
    if(key=='o'){angle=0;
    }
    if(key=='f'){//beginFire=false;
    }
}
void keySpecial(int key, int x, int y)
{   glutPostRedisplay();

    switch(key)
	{
	    case GLUT_KEY_UP:object.zpos-=0.2;camZ-=0.198; if(object.zpos==-80){object.zpos=-80;camZ=-78;}
       // if(sqrt((object.zpos-camZ)*(object.zpos-camZ))>=1){camZ-=0.5;}
	    break;
	    case GLUT_KEY_DOWN:object.zpos+=0.2;camZ+=0.2;if(object.zpos>=4){camZ=4;object.zpos=4;}
        break;
        case GLUT_KEY_LEFT:object.xpos-=0.2;camX-=0.2;if(object.xpos<=-20){object.xpos=-20;camX=-20;}
	    break;
	    case GLUT_KEY_RIGHT:object.xpos+=0.2;camX+=0.2;if(object.xpos>=20){object.xpos=20;camX=20;}
	    break;

	}
	if(key==GLUT_KEY_PAGE_UP )
	{
	    object.ypos+=5; camY+=5;if(object.ypos>10){object.ypos=10; camY=10;}
	}
	if(key==GLUT_KEY_PAGE_DOWN )
	{
	    object.ypos-=5;camY-=5; if(object.ypos<=-15){object.ypos=-15;camY=-15;}
	}

}

void dispAll(){
    if(startGame==false&&colliTrack==0){
    blue=0.66;
    red=0.2;
    green=0.5;
    screen();//welcome screen
    y_look=0;
    }

    if(startGame==true){
    blue=0.66;
    red=0.2;
    green=0.5;
    y_look=1;
    sprintf(holdScore,"%d",scoreCount);
   // screen1.initial=false;
    //screen2.initial=false;
    genSkyList();
    glCallList(skyList);
    getObj();//draw the object
    //glCallList(objlist)
    genCubeList();
    glCallList(cubeList);
    //shoot.checkFire(object.xpos,object.ypos,object.zpos,camX,camY,camZ);
    shoot.bulletTest(object.xpos,object.ypos,object.zpos,camX,camY,camZ,beginFire);
    colli.check(object,c,d,e,f,g,h,i,j,k);
    colli.checkBullet(shoot,c,d,e,f,g,h,i,j,k);

    glColor3f(0,1,1);
    t7.renderBitmapString(2.25,1.35,0,(void *)font,text[6]);
    show.colliReport(colliTrack,startGame,c,d,e,f,g,h,i,j,k);
    show.bulletReport(scoreCount,shoot);

    glColor3f(0,0,0);
    t8.renderBitmapString(-2.5,1.35,0,(void *)font,text[7]);
    glColor3f(0,1,0);
    t9.renderBitmapString(-2.1,1.35,0,(void*)font, holdScore);
    //colli.check1(object,d);

    }
     if(startGame==false&&colliTrack==1)
    {
    glColor3f(1,0,1);
    t6.renderBitmapString(-0.75,0,1,(void *)font,text[5]);
    Audio.stopFlightSound();
    Audio.stopColliSound();

    }
    glColor3f(1,1,1);

    glDeleteLists(cubeList,1);//All the lists used must be deleted otherwise they will cause abnormal increase in  memory
    glDeleteLists(skyList,1);//consumption during runtime

}






void changeSize(int w, int h) {
	if(h == 0) h = 1;
	float ratio = 1.0* w / h;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    glViewport(0, 0, w, h);
	gluPerspective(35, ratio, 1, 200);
	glMatrixMode(GL_MODELVIEW);
}

void renderScene(void) {
	glClearColor(red,green,blue,alpha);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glLoadIdentity();
	gluLookAt(0,  y_look,  5.0,
			  0,	0,	0,
		      0.0f,1.0f,0.0f);

	glLightfv(GL_LIGHT0, GL_AMBIENT, lightAmb);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightDiff);
	glLightfv(GL_LIGHT0,GL_SPECULAR,lightspec);

	dispAll();

	glutSwapBuffers();


}


int main(int argc, char **argv) {
	glutInit(&argc, argv);
	alutInit (&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
	glutInitWindowSize(800,600);
	glutCreateWindow("Sky fighter");

    Audio.Initializer();
//    Audio.PlayDemo();
	initRendering();
    glutDisplayFunc(renderScene);
	glutKeyboardFunc(keyboard);
	glutKeyboardUpFunc(keyboardUp);
	glutSpecialFunc(keySpecial);
	glutIdleFunc(renderScene);
	glutReshapeFunc(changeSize);
	glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);

	glutMainLoop();

	return 0;
}


