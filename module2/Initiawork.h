#ifndef INITIAWORK_H_INCLUDED
#define INITIAWORK_H_INCLUDED

#include <windows.h>
#include <gl/GL.h>
#include <gl/glu.h>
#include <gl/glut.h>

void myInit()
{
    //glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_SINGLE||GLUT_RGB);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(300,200);
    glutCreateWindow("My Opengl Learning");

    glClearColor(1.0,1.0,1.0,0.0);      //Set background color white. transparent:0;
    glColor3f(0.0,0.0,0.0);     //Set pencil color black
    glPointSize(4.0);       // Set pencil size 4*4.

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,640.0,0.0,480.0);
}

#endif // INITIAWORK_H_INCLUDED
