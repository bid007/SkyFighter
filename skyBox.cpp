#include"header.h"
#include"skyBox.h"

void skyBox::createSkyBox(GLuint tex0 ){
    glPushMatrix();

        glEnable(GL_TEXTURE_2D);
        glBindTexture(GL_TEXTURE_2D, tex0);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glBegin(GL_QUADS);
        glTexCoord2f(0,0);
        glVertex3f(-100,-100,-100);
        glTexCoord2f(1,0);
        glVertex3f(100,-100,-100);
        glTexCoord2f(1,1);
        glVertex3f(100,100,-100);
        glTexCoord2f(0,1);
        glVertex3f(-100,100,-100);
        glEnd();
        glDisable(GL_TEXTURE_2D);

    glPopMatrix();
}
