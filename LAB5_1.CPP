#include <graphics.h>
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <math.h>

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
void menu()
{
   cout<<"** MENU \n**";
   cout<<"1) Slope Positive and less than one\n";
   cout<<"2) Slope Positive and greater than one\n";
   cout<<"3) Slope Negative and less than one\n";
   cout<<"4) Slope Negative and greater than one\n";
   cout<<"5) Exit\n";
   cout<<"Enter Your Choice\n";
}

int main(){

	int gdriver = DETECT, gm;
	initgraph (&gdriver, &gm, "C:\\TURBOC3\\BGI");

	int ch;
	//cout<<"Enter start coordinates(X0,Y0)\n> ";
	//cin>>a>>b;
	//cout<<"Enter end coordinates(X1,Y1)\n> ";
	//cin>>c>>d;
	do{
	menu();
	cin>>ch;
	cleardevice();
	switch(ch)
	{
	  case 1:plotLine(100,100,150,120);
			 break;
	  case 2:plotLine(100,100,120,150);
			 break;
	  case 3:plotLine(150,120,100,100);
			 break;
	  case 4:plotLine(120,150,100,100);
			 break;
	  case 5: cout<<"Exiting the system.....";
			 break;
	  default:cout<<"Invalid Choice";
			  break;
	}
	}while(ch!=5);
	cout<<"\nPress any key to exit\n";
	getch();
	return 0;
}