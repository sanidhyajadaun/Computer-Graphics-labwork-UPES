#include<graphics.h>
#include<stdio.h>
#include<conio.h>

int main(){
	//DETECT is a macro defined in "graphics.h" header file
	int gd=DETECT, gm;
	
	//here we have passed 3 parameters, address of gd, address of gm, and path where the BGI files are stored
	initgraph(&gd, &gm, NULL);
	//to store what choice is the user making
	int choice;
	
	//for repeating the steps till the user want
	int run=1;
	
	while(run==1){

		printf("Enter your choice:\nLine: 1\nCircle: 2\nTriangle: 3\nRectangle: 4\nSquare: 5\nEllipse: 6\nArc: 7\nIncircle: 8\n");
		scanf("%d",&choice);
		
	//starting th eswitch case for leeting the user choose
		switch (choice){
			
	//case one would be for 'LINE' where the syntax would be: line(x1,y1,x2,y2)
			case 1:
				line(150,100,50,200);
				break;
				
	//case two would be for 'TRIANGLE' where syntax would be: 3 lines as line(x1,y1,x2,y2)	
			case 2:
				line(150,100,350,100);
                line(150,100,300,200);
            	line(300,200,500,200);
            	break;
				
	//case three would be for 'CIRCLE' where syntax would be: circle(x1,y1,radius)
			case 3:
				circle(250,200,50);
				break;
				
	//case four would be for 'RECTANGLE' where syntax would be: rectangle(left,top,right,bottom) 	¬¬
			case 4:
				rectangle(150,250,450,350);
				break;
			
	/case 5 would be for 'SQUARE' where syntax would be: rectangle(left,top,right,bottom) with left=top and right=bottom
			case 5:
				rectangle(200,200,400,400);
				break;
				
	//case 6 would be for 'ELLIPSE' where syntax would be: ellipse(x, y, start angle, end angle, x radius, y radius);
			case 6:
			    ellipse(250,200,0,360,100,50);
				break;
			//case 7 would be for 'ARC' where syntax would be: arc(x, y, start angle, end angle, radius);
			case 7:
			    arc(250,200,0,360,50);
				break;
				
			//case 8 would be for 'ARC' where syntax would be: circle(x1,y1,radius) and 3 line(x1,y1,x2,y2)	
			case 8:
			    circle(300, 150, 50);
                line(300, 70, 200, 200);
                line(300, 70, 400, 200);
                line(200, 200, 400, 200);
  
		} 
		
        //Asking if they want to continue the loop?
		printf("Want to try again?\n1. Yes\n2. No\n");
        scanf("%d", &run);	
	}
	
	//for completion of the program
	closegraph();
    return 0;
}
