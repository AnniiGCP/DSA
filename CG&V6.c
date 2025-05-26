#include<GL/glut.h>
#include<math.h>
float angle=0.0;
int ns=3;
int e=2;
void drawpolygon(){
glBegin(GL_POLYGON);
for(int i=0; i<ns;i++){
float x=cos(2*((float)(22/7))*i/ns),
y=sin(2*((float)(22/7))*i/ns);
glVertex2f(x,y);
}
/*glVertex2f(-0.5,-0.5);
glVertex2f(0.5,-0.5);
glVertex2f(0.5,0.5);
glVertex2f(-0.5,0.5);*/
glEnd();
}
void animate(){
if (e==3){
angle=0;
}
else{
angle+=1.0;
}
glutPostRedisplay();
}
void display(){
glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glRotatef(angle, 0.0,0.0,1.0);
drawpolygon();
glFlush();
}
void menu(int opt){
switch (opt){
case 1: ns=3 ;
e=2;
break;
case 2: ns=4;
e=2;
break;
case 3: e=3;
break;
}
glutPostRedisplay();
}
int main(int argc, char** argv){
glutInit(&argc, argv);
glutCreateWindow("3D transformation Animation");
glutDisplayFunc(display);
glutCreateMenu(menu);
glutAddMenuEntry("TRIANGLE",1);
glutAddMenuEntry("POLYGON",2);
glutAddMenuEntry("STOP",3);
glutAttachMenu(GLUT_RIGHT_BUTTON);
glutIdleFunc(animate);
glutMainLoop();
return 0;
}
