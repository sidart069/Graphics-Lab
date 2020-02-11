#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
void plotLine( int x0, int y0, int x1, int y1) {
	int dx = abs(x1 -x0);
	int sx = x0 < x1 ? 1 : -1;
	int dy = -abs(y1 -y0);
	int sy = y0 < y1 ? 1 : -1;
	int err = dx+dy;
	while(1){
		putpixel(x0, y0, WHITE);
		//cout<<x0<<", "<<y0<<endl;
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

int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\turboc3\\bgi");

   line(0,0,getmaxx(),0);
   line(0,0,0,getmaxy());
   line(0,getmaxy(),getmaxx(),getmaxy());
   line(getmaxx(),0,getmaxx(),getmaxy());
   line(getmaxx()/2,0,getmaxx()/2,getmaxy());
   line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
   plotLine(30,40,200,200);//slope of line positive and less than one
   plotLine(30,getmaxy()/2+40,200,getmaxy()/2+250);//positive and greatar than one
   plotLine(getmaxx()/2+200,40,getmaxx()/2+30,220);//negative and less than one
   plotLine(getmaxx()/2+30,getmaxy()/2+220,getmaxx()/2+230,getmaxy()/2+30);
   getch();
   closegraph();
   return 0;
}
