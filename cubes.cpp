#include"header.h"
#include"cubes.h"
#include"collision.h"
/*void cubes::setValue(GLfloat b)
{
    setY=b;
}*/

 void cubes::createCubes(){
        glPushMatrix();
        glScalef(1 ,1,1);
        glBegin(GL_QUADS);
        //front
        glVertex3f(-1,-1,1);

        glVertex3f(1,-1,1);

        glVertex3f(1,1,1);

        glVertex3f(-1,1,0);
        //bottom
        glVertex3f(-1,-1,1);

        glVertex3f(1,-1,1);

        glVertex3f(1,-1,-1);

        glVertex3f(-1,-1,-1);


        //top

        glVertex3f(-1,1,1);

        glVertex3f(1,1,1);

        glVertex3f(1,1,-1);

        glVertex3f(-1,1,-1);

        //back
        glVertex3f(-1,-1,-1);

        glVertex3f(1,-1,-1);

        glVertex3f(1,1,-1);

        glVertex3f(-1,1,-1);

        //right
        glVertex3f(1,1,1);

        glVertex3f(1,-1,1);

        glVertex3f(1,-1,-1);

        glVertex3f(1,1,-1);

        //left
        glVertex3f(-1,-1,1);

        glVertex3f(-1,1,1);

        glVertex3f(-1,1,-1);

        glVertex3f(-1,-1,-1);
        glColor3f(1,1,1);
        glEnd();
        glPopMatrix();
    }


void cubes::Disp1(){
    glPushMatrix();
    glColor3f(0,0,1);
    glTranslatef(x,y,z);
    x=15;y=10;
    createCubes();
    if(((z>=10))||flag1==true||bulletflag1==true)
    {
     z=-150;flag1=false;
     bulletflag1=false;
    }
    z+=0.7;
    //Audio.stopColliSound();
	glPopMatrix();


	}
void cubes::Disp2(){
    glPushMatrix();
    glColor3f(0,1,0);
    x=0;y=10;
    glTranslatef(x,y,z);
    createCubes();
    if(((z>=10))||flag2==true||bulletflag2==true)
    {
      z=-140;flag2=false;
      bulletflag2=false;
    }
    z+=0.6;
	glPopMatrix();

	}

	void cubes::Disp3(){
    glPushMatrix();
    glColor3f(1,0,0);
    x=-15;y=10;
    glTranslatef(x,y,z);
    //cb=new cubes;
    createCubes();
    if(((z>=10))||flag3==true||bulletflag3==true)
    {
      z=-130;flag3=false;
      bulletflag3=false;
    }
    z+=0.65;
	glPopMatrix();

	}

	void cubes::Disp4(){
    glPushMatrix();
    glColor3f(0,1,1);
    x=15;y=-5;
    glTranslatef(x,y,z);
    //cb=new cubes;
    createCubes();
    if(((z>=10))||flag4==true||bulletflag4==true)
    {
      z=-135;flag4=false;
      bulletflag4=false;
    }
    z+=0.58;
	glPopMatrix();

	}

	void cubes::Disp5(){
    glPushMatrix();
    glColor3f(1,0,1);
    x=-5;y=-5;
    glTranslatef(x,y,z);
    //cb=new cubes;
    createCubes();
    if(((z>=10))||flag5==true||bulletflag5==true)
    {
      z=-140;flag5=false;
      bulletflag5=false;
    }
    z+=0.59;
	glPopMatrix();

	}

	void cubes::Disp6(){
    glPushMatrix();
    glColor3f(1,1,0);
    x=-15;y=-5;
    glTranslatef(x,y,z);
    //cb=new cubes;
    createCubes();
    if(((z>=10))||flag6==true||bulletflag6==true)
    {
      z=-150;flag6=false;
      bulletflag6=false;
    }
    z+=0.62;
	glPopMatrix();

	}

	void cubes::Disp7(){
    glPushMatrix();
    glColor3f(0.7,0.7,1);
    x=25;y=-15;
    glTranslatef(x,y,z);
    //cb=new cubes;
    createCubes();
    if(((z>=10))||flag7==true||bulletflag7==true)
    {
      z=-130;flag7=false;
      bulletflag7=false;
    }
    z+=0.7;
	glPopMatrix();

	}

	void cubes::Disp8(){
    glPushMatrix();
    glColor3f(0.7,0,1);
    x=-25;y=-15;
    glTranslatef(x,y,z);
    //cb=new cubes;
    createCubes();
    if(((z>=10))||flag8==true||bulletflag8==true)
    {
      z=-140;flag8=false;
      bulletflag8=false;
    }
    z+=0.65;
	glPopMatrix();

	}

	void cubes::Disp9(){
    glPushMatrix();
    glColor3f(0,0.7,1);
    x=5;y=-15;
    glTranslatef(x,y,z);
    //cb=new cubes;
    createCubes();
    if(((z>=10))||flag9==true||bulletflag9==true)
    {
      z=-135;flag9=false;
      bulletflag9=false;
    }
    z+=0.55;
	glPopMatrix();

	}
	cubes::~cubes(){
    //

	}




