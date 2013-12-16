#include"header.h"
#include"report.h"
#include"cubes.h"
#include"text.h"
#include"fire.h"
showReport::showReport(){
    colliSound=true;
    colliWithBullet=true;
}
showReport::~showReport()
{
    //Audio.stopColliSound();
}

void showReport::colliReport(int &val,bool & control,cubes &c1,cubes &c2,cubes &c3,cubes &c4,cubes &c5,cubes &c6,cubes &c7,cubes &c8,cubes &c9){
    if(c1.flag1==true||c2.flag2==true||c3.flag3==true||c4.flag4==true||c5.flag5==true||c6.flag6==true||c7.flag7==true||c8.flag8==true||c9.flag9==true)
    {
        //Audio.stopColliSound();
        colliSound=true;
        countColli++;
        cout<<"cOuNtInG"<<endl;
        cout<<countColli<<endl;
        if(colliSound){Audio.collision();colliSound=false;}
        //else{}
    }
    glPushMatrix();
    glColor3f(0,1,0);
    if(countColli>=1){glColor3f(1,0,0);}

    glTranslatef(2.5,1.3,0);
    glScalef(0.5,0.05,0);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,1,0);
    if(countColli>=2){glColor3f(1,0,0);}
    //else{ glColor3f(0,1,0);}
    glTranslatef(2.5,1.2,0);
    glScalef(0.5,0.05,0);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,1,0);
    if(countColli>=3){glColor3f(1,0,0);}
    //else{ glColor3f(0,1,0);}
    glTranslatef(2.5,1.1,0);
    glScalef(0.5,0.05,0);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,1,0);
    if(countColli>=4){glColor3f(1,0,0);}
    //else{ glColor3f(0,1,0);}
    glTranslatef(2.5,1,0);
    glScalef(0.5,0.05,0);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,1,0);
    if(countColli>=5){glColor3f(1,0,0);}
    //else{ glColor3f(0,1,0);}
    glTranslatef(2.5,0.9,0);
    glScalef(0.5,0.05,0);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,1,0);
    if(countColli>=6){glColor3f(1,0,0); control=false; val=1;}
   // else{ glColor3f(0,1,0);}
    glTranslatef(2.5,0.8,0);
    glScalef(0.5,0.05,0);
    glutSolidCube(1);
    glPopMatrix();
    glColor3f(1,1,1);

}

void showReport::bulletReport(int & score, fire bullets)
{
    if(bullets.bulletCollided==true)
    {
        score+=5;
        if(colliWithBullet){Audio.bulletColliSound();}//colliWithBullet=false;}
    }
}
