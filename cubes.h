#ifndef CUBES_H
#define CUBES_H

class cubes
{
    GLfloat z;
    GLfloat y;
    GLfloat x;
    GLfloat setX;
    GLfloat setY;
    GLfloat setZ;
    GLfloat angle;
    //cubes* cb;
    public:
    bool flag1;
    bool flag2;
    bool flag3;
    bool flag4;
    bool flag5;
    bool flag6;
    bool flag7;
    bool flag8;
    bool flag9;
    bool bulletflag1;
    bool bulletflag2;
    bool bulletflag3;
    bool bulletflag4;
    bool bulletflag5;
    bool bulletflag6;
    bool bulletflag7;
    bool bulletflag8;
    bool bulletflag9;

    //void setValue(GLfloat a, GLfloat b, GLfloat c);
    void createCubes();
    void Disp1();
    void Disp2();
    void Disp3();
    void Disp4();
    void Disp5();
    void Disp6();
    void Disp7();
    void Disp8();
    void Disp9();
    ~cubes();
    friend class collision;
    friend class showReport;

};
#endif
