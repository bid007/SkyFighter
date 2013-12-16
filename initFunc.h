#ifndef INITFUNC_H
#define INITFUNC_H

GLuint _textureId[11]; //The id of the texture



void initRendering() {
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	Image* image = loadBMP("Textures/fighter1.bmp");
	Image* image1= loadBMP("Textures/skyBox1.bmp");
    Image* image2= loadBMP("Textures/skyBox2.bmp");
	Image* image8= loadBMP("Textures/backGround0.bmp");
	Image* image9= loadBMP("Textures/sky2.bmp");
	Image* image10=loadBMP("Textures/skyBox0.bmp");


	_textureId[0]= loadTexture(image);
	_textureId[1]= loadTexture(image1);
	_textureId[2]= loadTexture(image2);
	_textureId[8]= loadTexture(image8);
    _textureId[9]= loadTexture(image9);
    _textureId[10]=loadTexture(image10);

	delete image;
	delete image1;
	delete image2;
	delete image8;
	delete image9;
	delete image10;
}
#endif
