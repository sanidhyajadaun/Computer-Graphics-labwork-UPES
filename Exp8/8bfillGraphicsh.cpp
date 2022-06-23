#include<graphics.h>
   
void boundaryFill8(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color && getpixel(x, y) != fill_color)
    {
        putpixel(x, y, fill_color);
        boundaryFill8(x + 1, y, YELLOW, WHITE);
        boundaryFill8(x, y + 1, YELLOW, WHITE);
        boundaryFill8(x - 1, y, YELLOW, WHITE);
        boundaryFill8(x, y - 1, YELLOW, WHITE);
        boundaryFill8(x - 1, y - 1, YELLOW, WHITE);
        boundaryFill8(x - 1, y + 1, YELLOW, WHITE);
        boundaryFill8(x + 1, y - 1, YELLOW, WHITE);
        boundaryFill8(x + 1, y + 1, YELLOW, WHITE);
    }
}

int main()
{
    int gd = DETECT, gm;  
    
    initgraph(&gd, &gm, "");
    
	rectangle(100, 100, 300, 300);
    
    boundaryFill8(110, 110, 8, 30);
    delay(10000);
    
	getch();
	
    closegraph();
    return 0;
}
