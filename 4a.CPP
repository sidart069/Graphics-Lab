#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void BresLine(int x0, int y0, int x1, int y1) {
	int dx = abs(x1 -x0);
	int sx = x0 < x1 ? 1 : -1;
	int dy = -abs(y1 -y0);
	int sy = y0 < y1 ? 1 : -1;
	int err = dx+dy;
	while(1){
		putpixel(x0, y0, WHITE);
		if (x0 == x1 && y0 == y1)
			break;
		int e2 = 2*err;
		if (e2 >= dy){
			err += dy;
			x0 += sx;
		}
		if (e2 <= dx){
			err += dx;
			y0 += sy;
		}
	}
}

void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	//Rectangle
	BresLine(100,100,200,100);
	BresLine(100,100,100,150);
	BresLine(100,150,200,150);
	BresLine(200,100,200,150);

	//Triangle
	BresLine(350,50,300,300);
	BresLine(300,300,400,300);
	BresLine(350,50,400,300);

	//Square
	BresLine(350,350,450,350);
	BresLine(350,350,350,450);
	BresLine(350,450,450,450);
	BresLine(450,450,450,350);

	getch();
	closegraph();
}