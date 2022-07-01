# **Computer Graphics Lab Work - UPES**

In this repository. I have added my Computer Graphics lab work which is done in C and C++ with graphics.h and glut library.

#

## **Experiment 1 : Program to draw a line using DDA Algorithm**

It contains the program to draw a line using DDA Algorithm.

Algorithm :

Step 1 - Start Algorithm <br>
Step 2 - Declare x1,y1,x2,y2,dx,dy,x,y as integer variables.<br>
Step 3 - Enter value of x1,y1,x2,y2.<br>
Step 4 - Calculate dx = x2-x1<br>
Step 5 - Calculate dy = y2-y1<br>
Step 6 - If ABS (dx) > ABS (dy)<br>
            Then step = abs (dx)<br>
            Else<br>
Step 7 - xinc=dx/step<br>
            yinc=dy/step<br>
            assign x = x1<br>
            assign y = y1<br>
Step 8 - Set pixel (x, y)<br>
Step 9 - x = x + xinc <br>
            y = y + yinc<br>
            Set pixels (Round (x), Round (y))<br>
Step 10 - Repeat step 9 until x = x2<br>
Step 11 - End Algorithm<br>


#
