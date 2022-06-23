#include <graphics.h>
   
void boundaryFill4(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color && getpixel(x, y) != fill_color)
    {
        putpixel(x, y, fill_color);
        boundaryFill4(x + 1, y, WHITE, YELLOW);
        boundaryFill4(x, y + 1, WHITE, YELLOW);
        boundaryFill4(x - 1, y, WHITE, YELLOW);
        boundaryFill4(x, y - 1, WHITE, YELLOW);
    }
}
   
int main()
{
    int gd = DETECT, gm;
   
    initgraph(&gd, &gm, "");
   
	rectangle(100, 100, 300, 300);
    
    boundaryFill4(110, 110, 8, 30);
   
    delay(10000);
   
    getch();
   
    closegraph();
   
    return 0;
}
