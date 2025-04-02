#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
float angle = 0.0f; 
float sunAngle = 0.0f; 
float sunSpeed = 0.5f; 
void update(int value)
void drawEarth() {
glColor3f(0.0f, 0.0f, 1.0f); 
glutSolidSphere(0.5f, 50, 50); 
}
void drawSun() {
glColor3f(1.0f, 1.0f, 0.0f); 
glTranslatef(2.0f, 0.0f, 0.0f); 
glutSolidSphere(0.2f, 50, 50); 
}
void display() {
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glLoadIdentity();
gluLookAt(0.0f, 0.0f, 3.0f, 
0.0f, 0.0f, 0.0f, 
0.0f, 1.0f, 0.0f); 
glRotatef(angle, 0.0f, 1.0f, 0.0f);
drawEarth();
glPushMatrix();
glRotatef(sunAngle, 0.0f, 1.0f, 0.0f); 
drawSun();
glPopMatrix();
if (sunAngle <= 180.0f) {
glClearColor(0.5f, 0.5f, 0.5f, 1.0f); 
} else {
glClearColor(0.0f, 0.0f, 0.0f, 1.0f); 
}
glutSwapBuffers();
}
void update(int value) {
angle += 1.0f; 
sunAngle += sunSpeed; 
if (sunAngle >= 360.0f) {
sunAngle -= 360.0f; 
}
glutPostRedisplay(); 
glutTimerFunc(25, update, 0); 
}
void init() {
glClearColor(0.0f, 0.0f, 0.0f, 1.0f); 
glEnable(GL_DEPTH_TEST); 
}
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH); 
mode
glutInitWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT); 
glutCreateWindow("Day and Night Simulation"); 
init(); 
glutDisplayFunc(display); 
glutTimerFunc(25, update, 0); 
glutMainLoop(); 
return 0;
}
