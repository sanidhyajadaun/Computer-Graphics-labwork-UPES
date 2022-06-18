#include <graphics.h>
#include <stdio.h>
#include<math.h>
void Bresenham(int x1, int y1, int x2, int y2){
	int x = x1;
	int y = y1;
	int dx = x2 - x1;
	int dy = y2 - y1;
	
	int p = 2*dy-dx;
	
	while(x<=x2){
		putpixel(x,y,WHITE);
		x++;
		if(p<0){
			p = p + 2*dy;
		} else {
			p = p + 2*dy - 2*dx;
			y++;
		}
	}
}

int main(){
	int x1, x2, y1, y2;
	int gd = DETECT,gm;
	
	printf("Enter the first point (x1,y1) = ");
	scanf("%d %d",&x1,&y1);
	printf("Enter the second point (x2,y2) = ");
	scanf("%d %d",&x2,&y2);
	
	initgraph(&gd,&gm,"");
	Bresenham(x1,y1,x2,y2);
	
	getch();
	closegraph();
}
