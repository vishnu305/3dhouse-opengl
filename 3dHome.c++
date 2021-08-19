#include<GL/freeglut.h>

void display();
void reshape(int, int);
void timer(int);

void init() {
    glClearColor(0.0, 0.0, 0.0,1.0);
    glEnable(GL_DEPTH_TEST);
    

}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowPosition(350, 50);
    glutInitWindowSize(700, 700);
    glutCreateWindow("3D House Divvela Vishnu Sai Kumar");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(1000, timer, 0);
    init();
    glutMainLoop();
}

float angle = 0.0;
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0, 0.0, -8.0);
    glRotatef(angle, 1.0, 1.0, 1.0);
    glRotatef(angle, 0.0, 1.0, 0.0);
    glRotatef(angle, 0.0, 0.0, 1.0);
   
    //front facing
    //black lines for yellow door
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-0.5, 0.0, 2.0);
    glVertex3f(-0.5, -1.0, 2.0);
    glVertex3f(0.0, -0.8, 2.0);
    glVertex3f(0.0, -0.2, 2.0);

    glEnd();

    //black lines for white door inside of blue wall
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-0.5, 0.0, 2.0);
    glVertex3f(-0.5, -1.0, 2.0);
    glVertex3f(0.5, -1.0, 2.0);
    glVertex3f(0.5, 0.0, 2.0);
    glEnd();

    //yellow door inside of white door
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-0.5, 0.0, 2.0);
    glVertex3f(-0.5, -1.0, 2.0);
    glVertex3f(0.0, -0.8, 2.0);
    glVertex3f(0.0, -0.2, 2.0);

    glEnd();
    
     //white door inside of blue wall
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-0.5, 0.0, 2.0);
    glVertex3f(-0.5, -1.0, 2.0);
    glVertex3f(0.5, -1.0, 2.0);
    glVertex3f(0.5, 0.0, 2.0);
    glEnd();

    
    //blue rectangle
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-1.0, 1.0, 2.0);
    glVertex3f(-1.0, -1.0, 2.0);
    glVertex3f(1.0, -1.0, 2.0);
    glVertex3f(1.0, 1.0, 2.0);
    glEnd();
    //red traingle
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.4, 0.0);
    glVertex3f(0.0, 2.0, 1.5);
    glVertex3f(-1.0, 1.0, 2.0);
    glVertex3f(1.0, 1.0, 2.0);
    glEnd();
    //grey color smoke releaser
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.3, 0.7);
    glVertex3f(0.3, 1.6, 0.0);
    glVertex3f(0.6, 1.3, 0.0);
    glVertex3f(0.6, 2.3, 0.0);
    glVertex3f(0.3, 2.3, 0.0);

    glVertex3f(0.3, 1.6, 0.3);
    glVertex3f(0.6, 1.3, 0.3);
    glVertex3f(0.6, 2.3, 0.3);
    glVertex3f(0.3, 2.3, 0.3);

    glVertex3f(0.3, 2.3, 0.0);
    glVertex3f(0.3, 2.3, 0.3);
    glVertex3f(0.3, 1.6, 0.3);
    glVertex3f(0.3, 1.6, 0.0);
    
    glVertex3f(0.6, 2.3, 0.0);
    glVertex3f(0.6, 1.3, 0.0);
    glVertex3f(0.6, 1.3, 0.3);
    glVertex3f(0.6, 2.3, 0.3);

    glEnd();
    //red top
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(0.0, 2.0, 1.5);
    glVertex3f(1.0, 1.0, 2.0);
    glVertex3f(1.0, 1.0, -2.0);
    glVertex3f(0.0, 2.0, -1.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(0.0, 2.0, 1.5);
    glVertex3f(-1.0, 1.0, 2.0);
    glVertex3f(-1.0, 1.0, -2.0);
    glVertex3f(0.0, 2.0, -1.5);
    glEnd();
    //+ shape black lines on white windows

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(1.0, 0.5, 0.0);
    glVertex3f(1.0, -0.5, 0.0);
    glVertex3f(1.0, 0.0, 0.5);
    glVertex3f(1.0, 0.0, -0.5);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-1.0, 0.0, 0.5);
    glVertex3f(-1.0, 0.0, -0.5);
    glVertex3f(-1.0, 0.5, 0.0);
    glVertex3f(-1.0, -0.5, 0.0);
    glEnd();
    //square shape black outline for white window
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(1.0, 0.5, 0.5);
    glVertex3f(1.0, -0.5, 0.5);
    glVertex3f(1.0, -0.5, -0.5);
    glVertex3f(1.0, 0.5, -0.5);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-1.0, 0.5, 0.5);
    glVertex3f(-1.0, -0.5, 0.5);
    glVertex3f(-1.0, -0.5, -0.5);
    glVertex3f(-1.0, 0.5, -0.5);
    glEnd();
    //white windows on yellow sides
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(1.0, 0.5, 0.5);
    glVertex3f(1.0, -0.5, 0.5);
    glVertex3f(1.0, -0.5, -0.5);
    glVertex3f(1.0, 0.5, -0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-1.0, 0.5, 0.5);
    glVertex3f(-1.0, -0.5, 0.5);
    glVertex3f(-1.0, -0.5, -0.5);
    glVertex3f(-1.0, 0.5, -0.5);
    glEnd();

    //yellow sides
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(1.0, 1.0, 2.0);
    glVertex3f(1.0, -1.0, 2.0);
    glVertex3f(1.0, -1.0, -2.0);
    glVertex3f(1.0, 1.0, -2.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-1.0, 1.0, 2.0);
    glVertex3f(-1.0, -1.0, 2.0);
    glVertex3f(-1.0, -1.0, -2.0);
    glVertex3f(-1.0, 1.0, -2.0);
    glEnd();
    
   

   
    //back blue rectangle
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-1.0, 1.0, -2.0);
    glVertex3f(-1.0, -1.0, -2.0);
    glVertex3f(1.0, -1.0, -2.0);
    glVertex3f(1.0, 1.0, -2.0);
    glEnd();
    //back red color  traingle
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.4, 0.0);
    glVertex3f(0.0, 2.0, -1.5);
    glVertex3f(-1.0, 1.0, -2.0);
    glVertex3f(1.0, 1.0, -2.0);
    glEnd();
    //green bottom of house
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-1.0,-1.0,2.0);
    glVertex3f(1.0, -1.0, 2.0);
    glVertex3f(1.0, -1.0, -2.0);
    glVertex3f(-1.0, -1.0, -2.0);
    glEnd();
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, 1, 2.0, 50.0);//60:1 aspect ratio z-near=2  z-far=50.0
    //gluPerspective(60.0f, (GLfloat)w / (GLfloat)h, 0.1f, 100.0f);
    glMatrixMode(GL_MODELVIEW);
}

void timer(int) {
    glutPostRedisplay();
    glutTimerFunc(1000 / 60, timer, 0);
    angle += 0.8 * 1;
    if (angle > 360.0)
        angle = angle - 360.0;
}