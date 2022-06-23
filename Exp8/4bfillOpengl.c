#include<GL/glut.h>
#include<stdio.h>

void init()
{
    glViewport(0,0,600,500);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 600.0, 0.0,500.0);
    glMatrixMode(GL_MODELVIEW);
}
void SetPixel(float x,float y,float color[3])
{
    glBegin(GL_POINTS);
        glColor3fv(color);
        glVertex2f(x,y);
    glEnd();
    glFlush();
}

void floodfill(int x,int y,float Fillcol[3],float Bordercol[3])
{
    float pixels[3];
    //reading the pixel color at x and y
    glReadPixels(x,y,1,1,GL_RGB,GL_FLOAT,pixels);
    // printf("r : %f",pixels[0]);
    // printf("\ng : %f",pixels[1]);
    // printf("\nb : %f",pixels[2]);
    if((pixels[0]!=Fillcol[0] && pixels[1]!=Fillcol[1] && pixels[2]!=Fillcol[2]) && (pixels[0]!=Bordercol[0] && pixels[1]!=Bordercol[1] && pixels[2]!=Bordercol[2]))
    {
        SetPixel(x,y,Fillcol);
        floodfill(x+1,y,Fillcol,Bordercol);
        floodfill(x-1,y,Fillcol,Bordercol);
        floodfill(x,y+1,Fillcol,Bordercol);
        floodfill(x,y-1,Fillcol,Bordercol);
    }
    return;
}

void displayFunc(void)
{
    float FillColor[3]={0.0,1.0,0.0};
    float borderColor[3]={0.0,0.0,0.0};

    int Cod[5][2] =
    {
        {200,200},
        {200,300},
        {300,200},
        {300,300},
        {250,250}
    };
    glClearColor(0.4,0.4,0.9,1);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3fv(borderColor);
    glBegin(GL_LINES);
        glVertex2iv(Cod[0]);
        glVertex2iv(Cod[1]);
    glEnd();
    glBegin(GL_LINES);
        glVertex2iv(Cod[0]);
        glVertex2iv(Cod[2]);
    glEnd();
    glBegin(GL_LINES);
        glVertex2iv(Cod[2]);
        glVertex2iv(Cod[3]);
    glEnd();
    glBegin(GL_LINES);
        glVertex2iv(Cod[3]);
        glVertex2iv(Cod[4]);
    glEnd();
    glBegin(GL_LINES);
        glVertex2iv(Cod[1]);
        glVertex2iv(Cod[4]);
    glEnd();
    floodfill(Cod[0][0],Cod[0][1],FillColor,borderColor);
    glFlush();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,500);
    glutCreateWindow("Boundary fill algorithm using 4-connected approaches");
    glutDisplayFunc(displayFunc);
    init();
    glutMainLoop();
    return 0;
}
