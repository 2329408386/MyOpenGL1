#ifndef DISPLAYSIMPLEPOINTS_H_INCLUDED
#define DISPLAYSIMPLEPOINTS_H_INCLUDED

#include <windows.h>
#include <gl/GL.h>
#include <gl/glu.h>
#include <gl/glut.h>

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
        glVertex2i(100,50);
        glVertex2i(100,130);
        glVertex2i(150,50);
    glEnd();

    glFlush();      // Set the graph to screen.
}

#endif // DISPLAYSIMPLEPOINTS_H_INCLUDED
