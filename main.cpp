#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>
#include<mmsystem.h>
#include <cstdio>
using namespace std;
static float cm= 500.0;
static float tp3 = 0.0;
bool isRedlight = false;
bool isLlight = true;
float _nt = 0.0;
float sun = true;
float moon = false;
bool night = false;
float star = false;



///////function///////




void circle(GLfloat rx,GLfloat ry,GLfloat x,GLfloat y)

{
    int i;
    float rad = 0;
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    for(i = 0; i<=360; i++)
    {
        rad = i*(3.1416/180);
        glVertex2f(x+rx*cos(rad),y+ry*sin(rad));
    }

    glEnd();
}

void triangle(int x, int y, int x1, int x2,int y1)

{
    glBegin(GL_POLYGON);
    glVertex2d(x,y);
    glVertex2d(x1,y);
    glVertex2d(x1,y);
    glVertex2d(x2,y1);
    glVertex2d(x2,y1);
    glVertex2d(x,y);
    glEnd();
}

void rectangle(int x, int y, int x1, int y1)
{
    glBegin(GL_QUADS);
    glVertex2d(x,y);
    glVertex2d(x,y1);
    glVertex2d(x1,y1);
    glVertex2d(x1,y);



    glEnd();
}

void rectangle1(int x1,int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    glBegin(GL_QUADS);
    glVertex2d(x1,y1);
    glVertex2d(x3,y3);
    glVertex2d(x4,y4);
    glVertex2d(x2,y2);
    glEnd();
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'r':
        isRedlight = true;
        break;
    case 'g':
        isRedlight = false;
        break;
    case 'n':
        night = true;
        Night(_nt);
        sun=false;
        moon = true;
        star = true;
       isLlight = false;
        break;
    case 'd':
        sun=true;
        night = false;
        moon = false;
        star = false;
        isLlight = true;
        glClearColor(0.3, .65, 1, 1.0);
        break;
    default:
        break;
    }
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    Sun();
    Moon();
    Star();
    Building();
    ground();
    road();
    street();
    tree();
    cloud();
    Light();
    privatecar();
    glFlush();
}

void init()
{
    glClearColor(0.3, .70, 1, 1.0);
    glOrtho(-300,300,-300,300,-150,500);
}

int main()
{
    cout << "**********Welcome***********" << endl;
    cout << "press 'r' FOR Red Light " << endl;
    cout << "press 'g' FOR Green Light " << endl;
    cout << "press 'd' FOR DAY " << endl;
    cout << "press 'n' FOR Night " << endl;



    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1200,600);
    glutInitWindowPosition(60,60);
    glutCreateWindow("Road Side view");
    init();
    glutDisplayFunc(myDisplay);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
