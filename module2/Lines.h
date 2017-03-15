#ifndef LINES_H_INCLUDED
#define LINES_H_INCLUDED

#include <windows.h>
#include <gl/GL.h>
#include <gl/glu.h>
#include <gl/glut.h>

void line0()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
    glLineWidth(4.0);
        glVertex2i(100,200);
        glVertex2i(100,300);
        glVertex2i(200,300);
        glVertex2i(200,200);

    glEnd();


    glFlush();
}

void line1()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINE_STRIP);
    glLineWidth(4.0);
        glVertex2i(100,200);
        glVertex2i(100,300);
        glVertex2i(200,300);
        glVertex2i(200,200);

    glEnd();


    glFlush();
}

void line2()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINE_LOOP);
    glLineWidth(4.0);
        glVertex2i(100,200);
        glVertex2i(100,300);
        glVertex2i(200,300);
        glVertex2i(200,200);

    glEnd();


    glFlush();
}

void line3()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glLineWidth(4.0);
        glVertex2i(100,200);
        glVertex2i(100,300);
        glVertex2i(200,300);
        glVertex2i(200,200);

    glEnd();


    glFlush();
}

#endif // LINES_H_INCLUDED
