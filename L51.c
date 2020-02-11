#include<stdio.h>
#include<graphics.h>
 
int colran(){
	int z= rand()%15;
	return z;
}

void drawcircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;
 

    while (x >= y)
    {
	putpixel(x0 + x, y0 + y, colran());
	putpixel(x0 + y, y0 + x, colran());
	putpixel(x0 - y, y0 + x, colran());
	putpixel(x0 - x, y0 + y, colran());
	putpixel(x0 - x, y0 - y, colran());
	putpixel(x0 - y, y0 - x, colran());
	putpixel(x0 + y, y0 - x, colran());
	putpixel(x0 + x, y0 - y, colran());
 
	if (err <= 0)
	{
	    y += 1;
	    err += 2*y + 1;
	}
 
	if (err > 0)
	{
	    x -= 1;
	    err -= 2*x + 1;
	}
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
 
	return 0;
}