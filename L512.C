#include<stdio.h>
#include<graphics.h>
#include<dos.h> 
#include<conio.h>
#include<math.h>

int colran(){
	int z= rand()%15;
	return z;
}

void drawcircle(int x0, int y0, int radius)
{
    int y;
	int t= radius*radius;
	int m;
	int x;
	
	while( x>=(-radius)&& x<=radius){
		m=(x-x0)*(x-x0);
		k=sqrt(t-m)
		y=y0  -k;
		y1=y0 +k;
		putpixel(x,y,colran());
		putpixel(x,y1,colran());
		x++;
		
	}
}
 
int main()
{
	int gdriver=DETECT, gmode, error, x, y, r;
	initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
 
	printf("Enter radius of circle: ");
	scanf("%d", &r);
 
	printf("Enter co-ordinates of center(x and y): ");
	scanf("%d%d", &x, &y);
	drawcircle(x, y, r);
	getch();
	return 0;
}