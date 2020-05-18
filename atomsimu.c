#include<stdio.h>
#include<math.h>
#include<GL/glut.h>
#define pi 3.142
static GLfloat angle=0;

static int submenu;
static int mainmenu;
static int value =0;

void init()
{
	gluOrtho2D(-1000, 1000, -1000, 1000); 
}
void circle(float rad)
{
    glBegin(GL_POINTS); 
    glColor3f(1,0,0);
    for ( float i = 0; i < (2 * pi); i += 0.00001) 
    { 
        glVertex2i(rad * cos(i), rad * sin(i)); 
    } 
    glEnd();
}
void drawString(float x, float y, float z, char *string) {
    glColor3f(1,1,1);
  glRasterPos3f(x, y, z);

  for (char* c = string; *c != '\0'; c++) {
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10, *c);  // Updates the position
  }
}
void nuc(float rad)
{
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    for (float i=0;i<(2 * pi);i=i+0.00001)
    {
        glVertex2f(rad*cos(i),rad*sin(i));
    }
    glEnd();
}
void eleright(float rad)
{
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for ( float i = 0; i < (2 * pi); i += 0.00001) 
    { 
        glVertex2i(rad+20* cos(i),20* sin(i)); 
    } 
    glEnd();
}
void eleleft(float rad)
{
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for ( float i = 0; i < (2 * pi); i += 0.00001) 
    { 
        glVertex2i(-(rad +20* cos(i)),20* sin(i)); 
    } 
    glEnd();
}
void eletop(float rad)
{
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for ( float i = 0; i < (2 * pi); i += 0.00001) 
    { 
        glVertex2i(20* cos(i),rad+20* sin(i)); 
    }
    glEnd();
}
void eledown(float rad)
{
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for ( float i = 0; i < (2 * pi); i += 0.00001) 
    { 
        glVertex2i(20* cos(i),-(rad+20* sin(i))); 
    }
    glEnd();
}
void eletr(float rad)
{
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for ( float i = 0; i < (2 * pi); i += 0.00001) 
    { 
        glVertex2i(((rad-175)+20* cos(i)),((rad-175)+20* sin(i))); 
    }
    glEnd();
}
void eletl(float rad)
{
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for ( float i = 0; i < (2 * pi); i += 0.00001) 
    { 
        glVertex2i(-((rad-175)+20* cos(i)),((rad-175)+20* sin(i))); 
    }
    glEnd();
}
void eledl(float rad)
{
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for ( float i = 0; i < (2 * pi); i += 0.00001) 
    { 
        glVertex2i(-((rad-175)+20* cos(i)),-((rad-175)+20* sin(i))); 
    }
    glEnd();
}
void eledr(float rad)
{
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for ( float i = 0; i < (2 * pi); i += 0.00001) 
    { 
        glVertex2i(((rad-175)+20* cos(i)),-((rad-175)+20* sin(i))); 
    }
    glEnd();
}
void display()
{
    nuc(250);
    char n[]="NUCLEUS";
    drawString(-90,20,0,n);
    char d[]="(NEUTRON + PROTON)";
    drawString(-225,-30,0,d);
    if(value==1)
    {
        char n[]="HYDROGEN";
        drawString(-100,900,0,n);
        circle(400);
        char o[]="ORBIT";
        drawString(410,0,0,o);
        glPushMatrix();
        glRotatef(angle,0,0,1);
        eleright(400);
        char e[]="ELECTRON";
        drawString(420,0,0,e);
        glPopMatrix();
        glutSwapBuffers();
    }
    if(value==2)
    {
        char n[]="HELIUM";
        drawString(-100,900,0,n);
        circle(400);
        char o[]="ORBIT";
        drawString(410,0,0,o);
        glPushMatrix();
        glRotatef(angle,0,0,1);
        eleright(400);
        eleleft(400);
        char e[]="ELECTRON";
        drawString(420,0,0,e);
        glPopMatrix();
        glutSwapBuffers();
    }
    if(value==3)
    {
        char n[]="LITHIUM";
        drawString(-100,900,0,n);
        circle(400);
        circle(600);
        char o[]="ORBIT";
        drawString(610,0,0,o);
        glPushMatrix();
        glRotatef(angle,0,0,1);
        eleright(400);
        eleleft(400);
        eletop(600);
        char e[]="ELECTRON";
        drawString(0,620,0,e);
        glPopMatrix();
        glutSwapBuffers();
    }
    if(value==4)
    {
        char n[]="BERYLLIUM";
        drawString(-100,900,0,n);
        circle(400);
        circle(600);
        char o[]="ORBIT";
        drawString(610,0,0,o);
        glPushMatrix();
        glRotatef(angle,0,0,1);
        eleright(400);
        eleleft(400);
        eletop(600);
        eledown(600);
        char e[]="ELECTRON";
        drawString(0,620,0,e);
        glPopMatrix();
        glutSwapBuffers();
    }
    if(value==5)
    {
        char n[]="BORON";
        drawString(-100,900,0,n);
        circle(400);
        circle(600);
        char o[]="ORBIT";
        drawString(610,0,0,o);
        glPushMatrix();
        glRotatef(angle,0,0,1);
        eleright(400);
        eleleft(400);
        eletop(600);
        eledown(600);
        eletr(600);
        char e[]="ELECTRON";
        drawString(0,620,0,e);
        glPopMatrix();
        glutSwapBuffers();
    }
    if(value==6)
    {
        char n[]="CARBON";
        drawString(-100,900,0,n);
        circle(400);
        circle(600);
        char o[]="ORBIT";
        drawString(610,0,0,o);
        glPushMatrix();
        glRotatef(angle,0,0,1);
        eleright(400);
        eleleft(400);
        eletop(600);
        eledown(600);
        eletr(600);
        eledl(600);
        char e[]="ELECTRON";
        drawString(0,620,0,e);
        glPopMatrix();
        glutSwapBuffers();
    }
    if(value==7)
    {
    	char n[]="NITROGEN";
        drawString(-100,900,0,n);
        circle(400);
        circle(600);
        char o[]="ORBIT";
        drawString(610,0,0,o);
        glPushMatrix();
        glRotatef(angle,0,0,1);
        eleright(400);
        eleleft(400);
        eletop(600);
        eledown(600);
        eletr(600);
        eledl(600);
        eletl(600);
        char e[]="ELECTRON";
        drawString(0,620,0,e);
        glPopMatrix();
        glutSwapBuffers();
    }
    if(value==8)
    {
    	char n[]="OXYGEN";
        drawString(-100,900,0,n);
        circle(400);
        circle(600);
        char o[]="ORBIT";
        drawString(610,0,0,o);
        glPushMatrix();
        glRotatef(angle,0,0,1);
        eleright(400);
        eleleft(400);
        eletop(600);
        eledown(600);
        eletr(600);
        eledl(600);
        eletl(600);
        eledr(600);
        char e[]="ELECTRON";
        drawString(0,620,0,e);
        glPopMatrix();
        glutSwapBuffers();
    }
    if(value==9)
    {
    	char n[]="FLUORINE";
        drawString(-100,900,0,n);
        circle(400);
        circle(600);
        char o[]="ORBIT";
        drawString(610,0,0,o);
        glPushMatrix();
        glRotatef(angle,0,0,1);
        eleright(400);
        eleleft(400);
        eletop(600);
        eledown(600);
        eletr(600);
        eledl(600);
        eletl(600);
        eledr(600);
        eleleft(600);
        char e[]="ELECTRON";
        drawString(0,620,0,e);
        glPopMatrix();
        glutSwapBuffers();
    }
    if(value==10)
    {
    	char n[]="NEON";
        drawString(-100,900,0,n);
        circle(400);
        circle(600);
        char o[]="ORBIT";
        drawString(610,0,0,o);
        glPushMatrix();
        glRotatef(angle,0,0,1);
        eleright(400);
        eleleft(400);
        eletop(600);
        eledown(600);
        eletr(600);
        eledl(600);
        eletl(600);
        eledr(600);
        eleleft(600);
        eleright(600);
        char e[]="ELECTRON";
        drawString(0,620,0,e);
        glPopMatrix();
        glutSwapBuffers();
    }
    glutSwapBuffers();

}
void rotate(){
    angle=angle+1.0;
    if(angle>360)
    {
        angle=angle-360;
    }
    glClear(GL_COLOR_BUFFER_BIT);
    glutPostRedisplay();
}
void mouseControl(int button, int state, int x, int y)
{
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        if ( state == GLUT_DOWN)
            glutIdleFunc(rotate);
        break;
    default:
        break;
    }
}
void keyboard(unsigned char key, int x, int y)
{
    if(key=='s'){
        glutIdleFunc(NULL);
    }
    else if(key== 32){
        glutIdleFunc(rotate);
    }
    else if(key== 'q')
    {
        _Exit(0);
    }
}
void menu(int option){
  if(option == 13){
    exit(0);
  }else if(option==11){
      glutIdleFunc(rotate);
  }else if(option==12){
      glutIdleFunc(NULL);
  }else{
      value=option;
  }
  glutPostRedisplay();
} 
void createMenu(void)
{ 
    submenu= glutCreateMenu(menu);
    glutAddMenuEntry("HYDROGEN", 1);
    glutAddMenuEntry("HELIUM", 2);
    glutAddMenuEntry("LITHIUM", 3);
    glutAddMenuEntry("BERILIUM", 4);
    glutAddMenuEntry("BORON", 5);
    glutAddMenuEntry("CARBON",6);
    glutAddMenuEntry("NITROGEN",7);
    glutAddMenuEntry("OXYGEN",8);
    glutAddMenuEntry("FLUORINE",9);
    glutAddMenuEntry("NEON",10);

    mainmenu= glutCreateMenu(menu);
    glutAddSubMenu("SELECT THE ELEMENT", submenu);
    glutAddMenuEntry("SIMULATE", 11);
    glutAddMenuEntry("STOP SIMULATION",12);
    glutAddMenuEntry("EXIT", 13);   
    glutAttachMenu(GLUT_RIGHT_BUTTON);
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(500, 500);
    glutCreateWindow("ATOM SIMULATION");
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouseControl);
    glutKeyboardFunc(keyboard);
    createMenu();
    glutMainLoop();
    return 0;
}
