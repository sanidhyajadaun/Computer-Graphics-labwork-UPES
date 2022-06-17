#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include<math.h>

int X1,Y1,X2,Y2,L;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    int dx = X2-X1;
    int dy = Y2-Y1;
    if (abs(dx)>abs(dy))
    {
       L = abs(dx);
    }
    else
    {
        L = abs(dy);
    }
    int x = X1;
    int y = Y1;
    float xinc , yinc;
    xinc = (float)dx/L;
    yinc = (float)dy/L;
    float xnew,ynew;
    xnew = x+0.5;
    ynew = y+0.5;
    glClearColor(1,0,0,0);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
       glVertex2i(x,y);
    glEnd();

    for(int i=1;i<=L;i++)
    {
        xnew = xnew+xinc;
        ynew = ynew+yinc;
        glBegin(GL_POINTS);
          glVertex2i((int)xnew,(int)ynew);
        glEnd();
    }
glFlush();
}
int main(int argc, char** argv)
{
    printf("Enter X1: \n");
    scanf("%d",&X1);
    printf("Enter Y1: \n");
    scanf("%d",&Y1);
    printf("Enter X2: \n");
    scanf("%d",&X2);
    printf("Enter Y2: \n");
    scanf("%d",&Y2);

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500, 400);
glutInitWindowPosition(180, 154);
glutCreateWindow("DDA Algorithm");
gluOrtho2D(0,500,0,400);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}