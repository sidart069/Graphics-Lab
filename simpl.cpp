#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int colrand(){
int z= rand()%15;
return z;
}



void drawCircle1(int x, int y, int xc, int yc);
void drawCircle2(int x, int y, int xc, int yc);
void drawCircle3(int x, int y, int xc, int yc);
void drawCircle4(int x, int y, int xc, int yc);
void drawCircle5(int x, int y, int xc, int yc);
void drawCircle6(int x, int y, int xc, int yc);

void printCircle(int x, int y, int xc, int yc);

int xc, yc;

void main()
{
	int gd = DETECT, gm;
	int r, pk, x, y;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	r = 60;
	xc = getmaxx()/2-r;
	yc = getmaxy()/2-r;

	pk = 1 - r;
	x = 0;
	y = r;

	printCircle(pk, x, y, r);

	getch();
	closegraph();
}

void printCircle(int pk, int x, int y, int r){
	while(x < y)
	{
		if(kbhit())
			break;

		delay(10);

		
		
		drawCircle1(x,y,xc,yc);
		drawCircle2(x,y,xc+r*2,yc);

		drawCircle3(x,y,xc-r*2,yc+r*2);
		drawCircle4(x,y,xc-r*2,yc);

		drawCircle5(x,y,xc+305,yc+r);
		drawCircle6(x,y,xc+216,yc-23);

		++x;
		if(pk < 0)
		{
			pk = pk + (2*x) + 1;
		}
		else
		{
			--y;
			pk = pk + (2*x) + 1 - (2*y);
		}
	}
}

void drawCircle1(int x, int y, int xc, int yc)
{
	putpixel(x+xc,y+yc,colrand());
	putpixel(x+xc, -y+yc,colrand());
	putpixel(y+xc, x+yc,colrand());
	putpixel(y+xc, -x+yc,colrand());
}
void drawCircle2(int x, int y, int xc, int yc)
{
	putpixel(-x+xc, -y+yc,colrand());
	putpixel(-x+xc,y+yc,colrand());
	putpixel(-y+xc, x+yc,colrand());
	putpixel(-y+xc, -x+yc,colrand());
}
void drawCircle3(int x, int y, int xc, int yc)
{
	putpixel(-x+xc, -y+yc,colrand());
	putpixel(-y+xc, -x+yc,colrand());
	putpixel(x+xc, -y+yc,colrand());
	putpixel(y+xc, -x+yc,colrand());
}
void drawCircle4(int x, int y, int xc, int yc)
{
	putpixel(y+xc, x+yc,colrand());
	putpixel(-y+xc, x+yc,colrand());
	putpixel(x+xc,y+yc,colrand());
	putpixel(-x+xc,y+yc,colrand());
}
void drawCircle5(int x, int y, int xc, int yc)
{
	putpixel(-x+xc, -y+yc,colrand());
	putpixel(-y+xc, -x+yc,colrand());
	putpixel(x+xc, -y+yc,);
	putpixel(y+xc, -x+yc,colrand());
}
void drawCircle6(int x, int y, int xc, int yc)
{
	putpixel(y+xc, x+yc,colrand());
	putpixel(-y+xc, x+yc,colrand());
	putpixel(x+xc,y+yc,colrand());
	putpixel(-x+xc,y+yc,colrand());
}