#include"header.h"
#include"firstScreen.h"
//#include"GlobalVar.h"
firstScreen::firstScreen()
{
    initial=true;
}
 void firstScreen::screenRect(GLfloat rectSize,GLfloat texture,GLfloat xpos,GLfloat ypos ,GLfloat zpos,GLfloat xScale ,GLfloat yScale,GLfloat zScale ){
    if (initial)
    {

        initial=false;
    }
     glPushMatrix();
     glTranslatef(xpos,ypos,zpos);
     glEnable(GL_TEXTURE_2D);
            glBindTexture(GL_TEXTURE_2D, texture);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
     glScalef(xScale,yScale,zScale);
     glBegin(GL_QUADS);
        glTexCoord2f(0,0);
        glVertex3f(-rectSize,-rectSize,0);
        glTexCoord2f(1,0);
        glVertex3f(rectSize,-rectSize,0);
        glTexCoord2f(1,1);
        glVertex3f(rectSize,rectSize,0);
        glTexCoord2f(0,1);
        glVertex3f(-rectSize,rectSize,0);
     glEnd();
     glDisable(GL_TEXTURE_2D);
     glPopMatrix();
  }
  firstScreen::~firstScreen()
  {
  }


