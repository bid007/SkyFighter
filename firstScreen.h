#ifndef FIRSTSCREEN_H
#define FIRSTSCREEN_H
class firstScreen{
    private:
        GLfloat rectSize;
        GLfloat xpos;
        GLfloat ypos;
        GLfloat zpos;
        GLuint  texture;
        GLfloat xScale;
        GLfloat yScale;
        GLfloat zScale;

    public:
        firstScreen();
        bool initial;
        void screenRect(GLfloat rectSize,GLfloat texture,GLfloat xpos,GLfloat ypos ,GLfloat zpos,GLfloat xScale ,GLfloat yScale,GLfloat zScale );
        ~firstScreen();

};
#endif
