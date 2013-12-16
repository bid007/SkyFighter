#ifndef OBJ_H
#define OBJ_H
class fighter
{
   private:
        static short face_indicies[1172][9];
        static GLfloat vertices [593][3];
        static GLfloat normals [783][3];
        static GLfloat textures [551][2] ;
    public:
        GLfloat xpos,ypos,zpos;
        bool play;
        fighter();
        void rotate();
        void objWithTexture(GLuint texture,GLfloat x, GLfloat y, GLfloat z);
        friend class collision;
};
#endif
