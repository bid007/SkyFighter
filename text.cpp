#include"header.h"
#include"text.h"

void text:: renderBitmapString(
		float x,
		float y,
		float z,
		void *font,
		char *string) {
  glRasterPos3f(x, y,z);
  for (c=string; *c != '\0'; c++) {
    glutBitmapCharacter(font, *c);
  }
}
