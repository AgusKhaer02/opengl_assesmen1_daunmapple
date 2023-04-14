#include<windows.h>
#include<gl\glut.h>

void Display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(8.0);
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(49.81388 * 3, 31.27217 * 3); //b
    glVertex2f(50.32727 * 3, 24.06106 * 3); //c
    glVertex2f(51.35865 * 3, 24.0935 * 3); //d
    glVertex2f(51.08604 * 3, 31.1813 * 3); //e
    glVertex2f(60.89992 * 3, 30.27261 * 3); //f

    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(60.32727 * 3, 34.06106 * 3); //g
    glVertex2f(69.98684 * 3, 40.26734 * 3); //h
    glVertex2f(67.26077 * 3, 43.63038 * 3); //i
    glVertex2f(69.16902 * 3, 51.08166 * 3); //j
    glVertex2f(62.89904 * 3, 49.53688 * 3); //k
    glVertex2f(61.89948 * 3, 52.89904 * 3); //l
    glVertex2f(56.35646 * 3, 46.44733 * 3); //m
    glVertex2f(57.90124 * 3, 58.53294 * 3); //n

    glColor3f(1.0, 0.0, 1.0);
    glVertex2f(53.52643 * 3, 58.11479 * 3); //o
    glVertex2f(50.32727 * 3, 64.06106 * 3); //p
    glVertex2f(46.36085 * 3, 57.4425 * 3); //q
    glVertex2f(42.54434 * 3, 59.07815 * 3); //r
    glVertex2f(44.7252 * 3, 45.99298 * 3); //s

    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(38.8187 * 3, 52.89904 * 3); //t
    glVertex2f(37.91001 * 3, 48.9008 * 3); //u
    glVertex2f(31.27655 * 3, 50.80905 * 3); //v
    glVertex2f(33.73002 * 3, 43.17604 * 3); //w
    glVertex2f(31.18569 * 3, 41.63126 * 3); //x
    glVertex2f(42.09043 * 3, 42.63477 * 3); //a
    glVertex2f(41.09043 * 3, 33.63477 * 3); //y

    glEnd();
    glFlush();
}



void reshape(int width, int height){
    glViewport(0, 0, (GLsizei)width, (GLsizei)height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glRotatef(60.0, 1.0, 1.0, 1.0);
    gluOrtho2D(0.0, 320.0, 0.0, 240.0);
}

void init(){
    glClearColor(0.00, 0.0708, 0.170, 1.0);
}

int main(int args, char* argv[]){
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(320.0,240.0);
    glutCreateWindow("Assesmen 1 Daun Mapple | 201110199 Agus Kurniadin Khaer");
    init();
    glutDisplayFunc(Display);
    glutReshapeFunc(reshape);
    glutMainLoop();
}
