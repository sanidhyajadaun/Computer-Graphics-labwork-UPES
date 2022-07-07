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

## **Experiment 2 : Program to draw a line using Bresenham’s Algorithm**

It contains the program to draw a line using Bresenham’s Algorithm.

Algorithm:

The big advantage of this algorithm is that, it uses only integer calculations. Moving across the x axis in unit intervals and at each step choose between two different y coordinates. 

Here is the Bresenham algorithm for slope m < 1 – 

Step 1 − Input the 2 end-points of line (X0, Y0) & (X1, Y1), storing the left end-point in (X0, Y0). <br>
Step 2 − Plot the point (X0, Y0). <br>
Step 3 − Calculate the value of constants dx, dy, 2dy, and (2dy – 2dx) and get the first value for the decision parameter as – P0 = 2dy−dx <br>
Step 4 − At each Xk, Yk along the line, starting at k = 0, perform the following test − If Pk < 0, the next point to plot is (Xk+1, Yk) and Pk+1 = Pk+2dy Otherwise, the next point to plot is (Xk+1, Yk+1) and Pk+1 = Pk+2dy-2dx. <br>
Step 5 − Repeat step 4 (dx – 1) times. For m > 1, find out whether you need to increment x while incrementing y each time. After solving, the equation for decision parameter Pk will be very similar, just the x and y in the equation gets interchanged.<br>

#

## **Experiment 3 : To Implement basic In-built function in graphics.h**

It contains Program to draw a :- <br>
1. Line<br>
2. Circle <br>
3. Triangle<br>
4. Rectangle <br>
5. Square <br>
6. Ellipse<br>
7. Arc<br>
8. Incircle<br>

#

## **Experiment 4 : Program to build a hut**

It contains the program to build a hut.

# 

## **Experiment 5 : Program to draw equation of line y=mx+c**

It contains the program to draw equation of line y=mx+c.


#

## **Experiment 6 : Drawing circle using Midpoint Algorithm**

Mid-Point Circle Drawing Algorithm

This algorithm is used to calculate all the perimeter points of the circle in the first octant and then print them along with their mirror points in the other octants. This will work only because a circle is symmetric about its center. 

