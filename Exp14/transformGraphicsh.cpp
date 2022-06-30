#include <stdio.h>
#include <graphics.h>
#include <math.h>
int main()
{
    int gd = DETECT, gm, midx, midy;
    int choice;
    printf("2D Transformations - \n 1. Translation\n 2. Rotation\n 3. Scaling\n 4. Reflection");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
     int x4, y4, x2, y2;
     int left, top, right, bottom; 
     int tx, ty, x3, y3, sx, sy;
     double degree, radian;
     int rotated_point_x, rotated_point_y;
    switch (choice)
    {
    case 1:
        printf("Enter the value for Left Side: ");
        scanf("%d", &left);
        printf("Enter the value for Top Side: ");
        scanf("%d", &top);
        printf("Enter the value for Right Side: ");
        scanf("%d", &right);
        printf("Enter the value for Bottom Side: ");
        scanf("%d", &bottom);
        printf("Enter the Translation Vector: ");
        scanf("%d%d", &tx, &ty);
        initgraph(&gd, &gm, NULL);
        setbkcolor(BLACK);
        printf("RECTANGLE:'Before Translation' \n");
        setcolor(RED);
        rectangle(left, top, right, bottom);
        delay(10000);
        printf("RECTANGLE:'After Translation' \n");
        setcolor(GREEN);
        rectangle(left + ty, top + tx, right + ty, bottom + tx);
        delay(10000);
        closegraph();
        break;

    case 2:
        printf("Enter the 1st Co-ordinate of the Line: \n");
        scanf("%d%d", &x4, &y4);
        printf("Enter the 2nd Co-ordinate of the Line: \n");
        scanf("%d%d", &x2, &y2);
        printf("Enter a degree: \n");
        scanf("%lf", &degree);
        initgraph(&gd, &gm, NULL);
        printf("Line:'Before Rotation' \n");
        setcolor(LIGHTBLUE);
        line(x4, y4, x2, y2);
        delay(10000);
        radian = degree * 0.01745;
        printf("Enter the 1st Co-ordinate of the Line: \n");
        scanf("%d%d", &x4, &y4);
        printf("Enter the 2nd Co-ordinate of the Line: \n");
        scanf("%d%d", &x2, &y2);
        printf("Enter a degree: \n");
        scanf("%lf", &degree);
        initgraph(&gd, &gm, NULL);
        printf("Line:'Before Rotation' \n");
        setcolor(LIGHTBLUE);
        line(x4, y4, x2, y2);
        delay(10000);
        radian = degree * 0.01745;
        rotated_point_x = (int)(x4 + ((x2 - x4) * cos(radian) - (y2 - y4) * sin(radian)));
        rotated_point_y = (int)(y4 + ((x2 - x4) * sin(radian) + (y2 - y4) * cos(radian)));
        printf("Line:'After Rotation' \n");
        setcolor(LIGHTRED);
        line(x4, y4, rotated_point_x, rotated_point_y);
        delay(10000);
        closegraph();
        break;
    case 3:
        printf("Enter 1st Co-ordinate of the Triangle: ");
        scanf("%d%d", &x4, &y4);
        printf("Enter 2nd Co-ordinate of the Trinagle: ");
        scanf("%d%d", &x2, &y2);
        printf("Enter 3rd Co-ordinate of the Triangle: ");
        scanf("%d%d", &x3, &y3);
        printf("Enter the Scaling Vector: ");
        scanf("%d%d", &sx, &sy);
        initgraph(&gd, &gm, NULL);
        setbkcolor(BLACK);
        printf("TRIANGLE:'BEFORE SCALING' \n");
        setcolor(YELLOW);
        line(x4, y4, x2, y2);
        line(x2, y2, x3, y3);
        line(x3, y3, x4, y4);
        delay(3000);
        printf("TRIANGLE:'AFTER SCALING' \n");
        setcolor(BLUE);
        line(x4 * sx, y4 * sy, x2 * sx, y2 * sy);
        line(x2 * sx, y2 * sy, x3 * sx, y3 * sy);
        line(x3 * sx, y3 * sy, x4 * sx, y4 * sy);
        delay(3000);
        closegraph();
        break;
    case 4:
        initgraph(&gd, &gm, NULL);
        setbkcolor(BLACK);
        printf("Triangle:Reflection \n");
        midx = getmaxx() / 2;
        midy = getmaxy() / 2;
        setcolor(LIGHTRED);
        printf("(x,y) => LIGHTRED \n");
        line(midx + 20, midy - 10, midx + 100, midy - 10);
        line(midx + 100, midy - 10, midx + 100, midy - 50);
        line(midx + 100, midy - 50, midx + 20, midy - 10);
        delay(10000);
        setcolor(LIGHTBLUE);
        printf("(-x,y) => LIGHTBLUE \n");
        line(midx - 20, midy - 10, midx - 100, midy - 10);
        line(midx - 100, midy - 10, midx - 100, midy - 50);

        line(midx - 100, midy - 50, midx - 20, midy - 10);
        delay(10000);
        setcolor(LIGHTGREEN);
        printf("(x,-y) => LIGHTGREEN \n");
        line(midx + 20, midy + 10, midx + 100, midy + 10);
        line(midx + 100, midy + 10, midx + 100, midy + 50);
        line(midx + 100, midy + 50, midx + 20, midy + 10);
        delay(10000);
        closegraph();
    }
    return 0;
}

