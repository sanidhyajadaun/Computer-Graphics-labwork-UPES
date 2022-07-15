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

Step 1 − Input radius r and circle center (Xc, Yc) and obtain the first point on the circumference of the circle centered on the origin as (X0, Y0) = (0, r)<br>
Step 2 − Calculate the initial value of decision parameter as P0 = 5/4 – r . <br>
Step 3 − At each Xk position starting at k=0, perform the following test − If PK < 0, then next point on circle (0, 0) is (XK+1, YK) and PK+1 = PK + 2XK+1 + 1 Else, PK+1 = PK + 2XK+1 + 1 – 2YK+1 Where, 2XK+1 = 2XK+2 and 2YK+1 = 2YK-2. <br>
Step 4 − Determine the symmetry points in other seven octants. <br>
Step 5 − Move each calculate pixel position (X, Y) onto the circular path centered on (Xc, Yc) and plot the coordinate values. X = X + XC, Y = Y + YC <br>
Step 6 − Repeat step-3 through 5 until X >= Y. <br>


#

## **Experiment 7 : Drawing ellipse using Midpoint Ellipse Drawing Algorithm**

The midpoint ellipse method is applied throughout the first quadrant in two parts.

Take input radius along x axis and y axis and obtain center of ellipse.<br>
Step 1 - Initially, we assume ellipse to be centered at origin and the first point as : (x, y0)= (0, ry).<br>
Step 2 - Obtain the initial decision parameter for region 1 as: p10=ry2+1/4rx2-rx 2ry. <br>
Step 3 - For every xk position in region 1 : <br>
If p1k<0 then the next point along the is (xk+1 , yk) and p1k+1=p1k+2ry2xk+1+ry2<br>
Else, the next point is (xk+1, yk-1 ) <br>
And p1k+1=p1k+2ry2xk+1 – 2rx2yk+1+ry2 <br>
Step 4 - Obtain the initial value in region 2 using the last point (x0, y0) of region 1 as: p20=ry2(x0+1/2)2+rx2 (y0-1)2-rx2ry2<br>
Step 5 - At each yk in region 2 starting at k =0 perform the following task.<br> 
If p2k>0 the next point is (xk, yk-1) and p2k+1=p2k-2rx2yk+1+rx2. <br>
Step 6 - Else, the next point is (xk+1, yk -1) and p2k+1=p2k+2ry2xk+1 -2rx2yk+1+rx2. <br>
Step 7 - Now obtain the symmetric points in the three quadrants and plot the coordinate value as: x=x+xc, y=y+yc. <br>
Step 8 - Repeat the steps for region 1 until 2ry2x>=2rx2y. <br>

#

## **Experiment 8 : Filling the Objects using boundary fill algorithm**

Boundary Fill Algorithm<br>

This algorithm picks a point inside an object and starts to fill until it hits the boundary of the object. The color of the boundary and the color that we fill should be different for this algorithm to work. In this algorithm, we assume that color of the boundary is same for the entire object. <br>

Step 1 − It takes an interior point(x, y), a fill color, and a boundary color as the input. <br>

Step 2 − The algorithm starts by checking the color of (x, y). If it’s color is not equal to the fill color and the boundary color, then it is painted with the fill color and the function is called for all the neighbours of (x, y). <br> 

Step 3 −If a point is found to be of fill color or of boundary color, the function does not call its neighbours and returns. <br>

Step 4 −This process continues until all points up to the boundary color for the region have been tested. <br>

#

## **Experiment 9 : Filling the Objects using flood fill algorithm**

Flood Fill Algorithm (4-connected & 8-connected) <br>
 
Instead of relying on the boundary of the object, it relies on the fill colour. In other words, it replaces the interior colour of the object with the fill colour. When no more pixels of the original interior colour exist, the algorithm is completed. Algorithm for 4-connected :- <br> 

Step 1 − Initialize the value of seed point (seedx, seedy), fcolor and dcol. <br>
Step 2 − Define the boundary values of the polygon. <br>
Step 3 − Check if the current seed point is of default color, then repeat steps 4 and 5 till the boundary pixels are reached. <br>
Step 4 − Change the default color with the fill color at the seed point.<br>
Step 5 − Recursively follow the procedure with four neighborhood points. <br>
Step 6 − Exit <br>

#

## **Experiment 10 : Filling the Objects using Scan line algorithm**

Scan Line Algorithm 

This algorithm works by intersecting scan line with polygon edges and fills the polygon between pairs of intersections. The following steps depict how this algorithm works. <br>

Step 1 − Find out the Ymin and Ymax from the given polygon. <br>
Step 2 − ScanLine intersects with each edge of the polygon from Ymin to Ymax. Name each intersection point of the polygon. As per the figure shown above, they are named as p0, p1, p2, p3. <br>
Step 3 − Sort the intersection point in the increasing order of X coordinate i.e. (p0, p1), (p1, p2), and (p2, p3). <br>
Step 4 − Fill all those pairs of coordinates that are inside polygons and ignore the alternate pairs.<br>

#

## **Experiment 11 : Performing Clipping Operation using Cohen Sutherland Algorithm**

It contains program for performing the line clipping operation using Cohen Sutherland.
 
#

## **Experiment 12 : Performing Clipping Operation on polygon using Sutherland Hodgeman Algorithm**

It contains program for performing Clipping Operation on polygon using Sutherland Hodgeman Algorithm.

#

## **Experiment 13 : Character Generation**

It contains program for performing character generation. <br>
Character generated :- "L"

#

## **Experiment 14 : Performing 2D Transformations on object**

Transformations play a very important role in manipulating objects on screen. There are three basic kinds of Transformations in Computer Graphics: <br>
1. Translation 
2. Rotation 
3. Scaling 

Translation: Translation refers to moving an object to a different position on screen. <br>
Formula: X = x + tx, Y = y + ty; where tx and ty are translation coordinates <br>
The OpenGL function is glTranslatef( tx, ty, tz ); <br>

Rotation : Rotation refers to rotating a point. <br>
Formula: X = xcosA – ysinA, Y = xsinA + ycosA; A is the angle of rotation. <br>
The above formula will rotate the point around the origin. To rotate around a different point, the formula: <br>
X = cx + (x-cx)*cosA - (y-cy)*sinA, <br>
Y = cx + (x-cx)*sinA + (y-cy)*cosA, cx, cy is centre coordinates, A is the angle of rotation. <br> 
The OpenGL function is glRotatef (A, x, y, z). <br>
