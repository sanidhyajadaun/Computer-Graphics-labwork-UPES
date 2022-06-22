#include<GL/glut.h>  //to import all the functions defined in the glut.h file
#include<stdio.h>    //for standard input and output 

//radius of the circle s
int r; 

//center of the circle 
int Xc = 500, Yc = 400;

void setPixel(int x,int y)   //for plotting the passed coordinates 
{
    glBegin(GL_POINTS);
        glVertex2i(x,y);
    glEnd();
    glFlush();     //to clear the buffer 
}

void displayFunc(void)
{
    int x,y;
    x = 0;
    y = r;
    
    //calculating the initial value of decision parameter
    float P = ((float)(5/4)) - r;
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
        glVertex2i(x,y);
    glEnd();
    
    while(x<y)
    {
        x = x + 1;
        if(P<0)
        {
            P = P + (2*x) + 1;
        }
        else 
        {
            y = y - 1;
            P = P + (2*x) + 1 - (2*y);
        }
        setPixel(Xc+x,Yc+y);
        setPixel(Xc+x,Yc-y);
        setPixel(Xc+y,Yc+x);
        setPixel(Xc+y,Yc-x);
        setPixel(Xc-x,Yc-y);
        setPixel(Xc-y,Yc-x);
        setPixel(Xc-x,Yc+y);
        setPixel(Xc-y,Yc+x); 
    }
    glFlush();
}

int main(int argc,char** argv)
{
    //1. getting the radius of the circle 
    printf("Enter the radius of the circle : ");
    scanf("%d",&r);
    
    r = abs(r);
    // printf("%d\n",argc);
    glutInit(&argc,argv);            //initialising the glut library
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1000,1000);
    glutCreateWindow("Mid point Circle Algorithm");
    gluOrtho2D(1000,0,0,1000);
    glutDisplayFunc(displayFunc);
    glutMainLoop();
    return 0;
}
