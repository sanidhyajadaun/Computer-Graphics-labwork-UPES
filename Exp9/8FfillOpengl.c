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

void floodfill(int x,int y,float oldcol[3],float newcol[3])
{
    float pixels[3];
    //reading the pixel color at x and y
    glReadPixels(x,y,1,1,GL_RGB,GL_FLOAT,pixels);
    printf("r : %f",pixels[0]);
    printf("\ng : %f",pixels[1]);
    printf("\nb : %f",pixels[2]);
    if(pixels[0]==oldcol[0] && pixels[1]==oldcol[1] && pixels[2]==oldcol[2])
    {
        SetPixel(x,y,newcol);
        floodfill(x-1,y,oldcol,newcol);
        floodfill(x+1,y,oldcol,newcol);
        floodfill(x,y+1,oldcol,newcol);
        floodfill(x,y-1,oldcol,newcol);
        floodfill(x-1,y-1,oldcol,newcol);
        floodfill(x+1,y+1,oldcol,newcol);
        floodfill(x+1,y-1,oldcol,newcol);
        floodfill(x-1,y+1,oldcol,newcol);

    }
    return;
}

void displayFunc(void)
{
    float oldColor[3]={0.0,1.0,0.0};
    float newColor[3]={0.2,0.5,0.8};

    int Cod[5][2] =
    {
        {200,200},
        {200,300},
        {300,200},
        {300,300},
        {250,250}
    };
    glClearColor(0,0,0,1);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3fv(oldColor);
        glVertex2iv(Cod[0]);
        glVertex2iv(Cod[1]);
        glVertex2iv(Cod[2]);
        glVertex2iv(Cod[3]);
        glVertex2iv(Cod[4]);
    glEnd();

    floodfill(Cod[0][0],Cod[0][1],oldColor,newColor);
    glFlush();

}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,500);
    glutCreateWindow("Flood fill algorithm");
    glutDisplayFunc(displayFunc);
    init();
    glutMainLoop();
    return 0;
}

