#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd,&gm,NULL);
    line(150,100,100,150);
    line(150,100,200,150);
    line(150,100,320,100);
    line(320,100,350,150);
    rectangle(100,150,200,280);
    rectangle(200,150,350,280);
    rectangle(120,230,170,280);
	
	getch();
	return 0;
}
