#include <graphics.h>
#include <stdio.h>
#include<math.h>

void midpoint(int r){
	int x = 0;
	int y = r;
	
	int p = (1-r);
	
	while (x>y){
		putpixel(x + x, y + y, WHITE);
        putpixel(x + y, y - x, WHITE);
        putpixel(x - y, y + x, WHITE);
        putpixel(x - x, y - y, WHITE);
        putpixel(x + x, y + y, WHITE);
        putpixel(x + y, y - x, WHITE);
        putpixel(x - y, y + x, WHITE);
        putpixel(x - x, y - y, WHITE);
       
		x++;
		if (p<0){
			p = p + 2*x + 1;
		} 
		else {
			y--;
			p = p + 2*x - 2*y + 1;
		}
	}
}

int main()
{
	int r;
	int gd = DETECT,gm;
		
	printf("Enter radius for circle: ");
	scanf("%d",&r);
	
	initgraph(&gd,&gm, (char*)"");
	
	midpoint(r);
	getch();
	closegraph();
}
