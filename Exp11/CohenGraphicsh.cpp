#include <graphics.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int rcode_begin[4] = {0, 0, 0, 0}, rcode_end[4] = {0, 0, 0, 0}, region_code[4];
    int W_xmax, W_ymax, W_xmin, W_ymin, flag = 0;
    float slope;

    int x1, y1, x2, y2, i, xc, yc;
    int gd = DETECT, gm;
    printf("Enter the values for XMin,YMin = \n");
    scanf("%d%d", &W_xmin, &W_ymin);

    printf("Enter the values for XMax,YMax = \n");
    scanf("%d%d", &W_xmax, &W_ymax);

    printf("Enter the intial point x1 and y1 = \n");
    scanf("%d%d", &x1, &y1);

    printf("Enter the final point x2 and y2 = \n");
    scanf("%d%d", &x2, &y2);

    initgraph(&gd, &gm, NULL);
    setbkcolor(BLACK);
    printf("Cohen Sutherland Line Clipping Algorithm \n");
    printf("Before Clipping \n");

    setcolor(YELLOW);
    rectangle(W_xmin, W_ymin, W_xmax, W_ymax);
    setcolor(GREEN);
    line(x1, y1, x2, y2);
    // end points of Line
    if (y1 > W_ymax)
    {
        rcode_begin[0] = 1; // Top
        flag = 1;
    }
    if (y1 < W_ymin)
    {
        rcode_begin[1] = 1; // Bottom
        flag = 1;
    }
    if (x1 > W_xmax)
    {
        rcode_begin[2] = 1; // Right
        flag = 1;
    }
    if (x1 < W_xmin)
    {
        rcode_begin[3] = 1; // Left
        flag = 1;
    }
    // end point of Line
    if (y2 > W_ymax)
    {
        rcode_end[0] = 1; // Top
        flag = 1;
    }
    if (y2 < W_ymin)
    {
        rcode_end[1] = 1; // Bottom
        flag = 1;
    }
    if (x2 > W_xmax)
    {
        rcode_end[2] = 1; // Right
        flag = 1;
    }
    if (x2 < W_xmin)
    {
        rcode_end[3] = 1; // Left
        flag = 1;
    }
    if (flag == 0)
    {
        printf("No need of clipping as it is already in window");
    }
    flag = 1;
    for (i = 0; i < 4; i++)
    {
        region_code[i] = rcode_begin[i] && rcode_end[i];
        if (region_code[i] == 1)
            flag = 0;
    }
    if (flag == 0)
    {
        printf("Line is completely outside the window \n");
    }
    else
    {
        slope = (float)(y2 - y1) / (x2 - x1);
        if (rcode_begin[2] == 0 && rcode_begin[3] == 1) // left
        {
            y1 = y1 + (float)(W_xmin - x1) * slope;
            x1 = W_xmin;
        }
        if (rcode_begin[2] == 1 && rcode_begin[3] == 0) // right
        {
            y1 = y1 + (float)(W_xmax - x1) * slope;
            x1 = W_xmax;
        }
        if (rcode_begin[0] == 1 && rcode_begin[1] == 0) // top
        {
            x1 = x1 + (float)(W_ymax - y1) / slope;
            y1 = W_ymax;
        }
        if (rcode_begin[0] == 0 && rcode_begin[1] == 1) // bottom
        {
            x1 = x1 + (float)(W_ymin - y1) / slope;
            y1 = W_ymin;
        }
        // end points
        if (rcode_end[2] == 0 && rcode_end[3] == 1) // left
        {
            y2 = y2 + (float)(W_xmin - x2) * slope;
            x2 = W_xmin;
        }
        if (rcode_end[2] == 1 && rcode_end[3] == 0) // right
        {
            y2 = y2 + (float)(W_xmax - x2) * slope;
            x2 = W_xmax;
        }
        if (rcode_end[0] == 1 && rcode_end[1] == 0) // top
        {
            x2 = x2 + (float)(W_ymax - y2) / slope;
            y2 = W_ymax;
        }
        if (rcode_end[0] == 0 && rcode_end[1] == 1) // bottom
        {
            x2 = x2 + (float)(W_ymin - y2) / slope;
            y2 = W_ymin;
        }
    }

    delay(10000);
    closegraph();

    initgraph(&gd, &gm, NULL);
    setbkcolor(BLACK);

    printf("Cohen Sutherland Line Clipping Algorithm \n");
    printf("After Clipping \n");

    setcolor(BLUE);

    rectangle(W_xmin, W_ymin, W_xmax, W_ymax);

    setcolor(RED);
    line(x1, y1, x2, y2);
    delay(10000);
    closegraph();
}
