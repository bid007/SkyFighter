#ifndef FIRE_H
#define FIRE_H
//class fighter;
class fire{
    public:
    GLfloat bulletX;
    GLfloat bulletY;
    GLfloat bulletZ;
    GLfloat trackZ;
    GLfloat bulletAlpha;
    bool bulletCollided;
    bool fireSound;
    fire();
    void bullet();
    //void checkFire(GLfloat x, GLfloat y, GLfloat z,GLfloat Xcam,GLfloat Ycam, GLfloat Zcam );
    void bulletTest(GLfloat ,GLfloat ,GLfloat,GLfloat ,GLfloat ,GLfloat,bool &);
};
#endif
