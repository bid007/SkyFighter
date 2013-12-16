#include"header.h"
#include"fire.h"
#include"obj.h"
fire::fire()
{
    bulletCollided=false;
    fireSound=true;
}
void fire::bullet()
{
    glPushMatrix();
    glColor4f(1,0.3,0,bulletAlpha);
    glTranslatef(0,-0.068,0);
    glutSolidCylinder(0.15,0.15,122,122);
    glPopMatrix();
}

   void fire::bulletTest(GLfloat planeX,GLfloat planeY,GLfloat planeZ,GLfloat camX,GLfloat camY,GLfloat camZ,bool &fire){
    glPushMatrix();
    glTranslatef(-camX,-camY,-camZ);
    glPushMatrix();
    glColor3f(0,1,0);
    bulletX=planeX;bulletY=planeY;
   glTranslatef(bulletX,bulletY,bulletZ);
    bullet();
    if((bulletZ<=-50)||(bulletCollided==true))
    {
        bulletZ=planeZ;
        fire=false;
        bulletAlpha=0;
        bulletCollided=false;

    }
    if(fire){
    bulletAlpha=1;
    bulletZ-=0.5;
    if(fireSound){Audio.fired();fireSound=false;}

    }
    //cout<<"Bullet"<<endl;
    //cout<<bulletX<<" "<<bulletY<<" "<<bulletZ<<endl;
	glPopMatrix();
	glPopMatrix();

	}
