#ifndef TEXT_H
#define TEXT_H
class text{
    private:
    char* c;
    public:
    void renderBitmapString(float x,float y,float z,void *font,char *string);
};
#endif
