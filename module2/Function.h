#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include <windows.h>
#include <gl/GL.h>
#include <gl/glu.h>
#include <gl/glut.h>
#include <math.h>

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(2.0);

    double PI=acos(-1);

    glBegin(GL_POINTS);
    for(float x=0;x<2*PI;x=x+0.01)
    {
        float y=sin(x);
        glVertex2d(320*x/PI,240*(y+1));
    }
    glEnd();
    glFlush();      // Set the graph to screen.
}

void myDisplay2()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(2.0);
    glColor3f(1.0,0,0);

    double PI=acos(-1);

    glBegin(GL_POINTS);
    for(float a=0;a<2*PI;a=a+0.01)
    {
        float x=10+sin(15*a);
        float y=sin(a);

        glVertex2d((x-9)*320,(y+1)*240);
    }
    glEnd();
    glFlush();      // Set the graph to screen.
}

#endif // FUNCTION_H_INCLUDED
