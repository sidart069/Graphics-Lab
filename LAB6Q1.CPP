#include <graphics.h>
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <math.h>

int main()
{
	int gm,gd=DETECT;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	//Cartesian system: (mid,mid),r=100
	int x0=getmaxx()/2;
	int y0=getmaxy()/2;
	int r=100;
	int x,y,temp;
	cout<<"Cartesian";
	for(x=-100;x<=100;x++)
	{
		y=sqrt(r*r-x*x);
		putpixel(x+x0,y0+y,RED);
		putpixel(x+x0,y0-y,RED);
	}
	getch();
	cleardevice();
	cout<<"Trigonometric";
// for(r=0;r<=100;r++)
	for(int theta=0;theta<360;theta+=1)
	{
  //	cout<<floor(r*cos(theta))<<endl;
	x=floor(r*cos(theta));
	y=floor(r*sin(theta));
  //	cout<<x<<" "<<y<<endl;
  //	delay(1);
	putpixel(x+x0,y+y0,RED);
	}
	getch();

	closegraph();
}