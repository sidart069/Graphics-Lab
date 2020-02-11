#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
    int gd=DETECT,gm,x,y,x1,y1,x2,y2,dx,dy,i,e;
    float xinc,yinc;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    cleardevice();
    int n;
    printf("enter your choice\n");
    scanf("%d",&n);
    if(n==1){
	printf("your line is positive slope and less than 1 :\n");
	x2=200;
	x1=120;
	y2=150;
	y1=100;
	}
   else if(n==2){
	printf("your line is positive slope and greater than 1 :\n");
	x2=150;
	x1=100;
	y2=200;
	y1=120;
	}

      else if(n==3){
	printf("your line is negative slope and less than 1 :\n");
	x2=-200;
	x1=120;
	y2=150;
	y1=100;
	}

      else if(n==4){
	printf("your line is negative slope and greater than 1 :\n");
	x2=150;
	x1=100;
	y2=-200;
	y1=120;
	}
    
    int z=15;
    dx=x2-x1;
    dy=y2-y1;
    if(x1<x2)
	xinc=1;
    else
	xinc=-1;
    if(y1<y2)
	yinc=1;
    else
	yinc=-1;
    x=x1;
    y=y1;
    if(dx>=dy)
    {
	e=(2*dy)-dx;
	while(x!=x2)
	{
	    if(e<0)
		e=e+(2*dy);
	    else
	    {
		e=e+(2*(dy-dx));
		y=y+yinc;
		y=y+yinc;
	    }
	    x=x+xinc;
	    x=x+xinc;
	    putpixel(x,y,(z--)%15);
	}
    }
    else
    {
	e=(2*dx)-dy;
	while(y!=y2)
	{
	    if(e<0)
		e=e+(2*dx);
	    else
	    {
		e=e+(2*(dx-dy));
		x=x+xinc;
		x=x+xinc;
	    }
	    y=y+yinc;
	    y=y+yinc;
	    putpixel(x,y,(z--)%15);
	}
    }
    getch();
    closegraph();
    restorecrtmode();
}