#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<stdio.h>
int sign(int a)
{
  if(a>0)
	return 1;
  else if(a<0)
	return -1;
  else
	 return 0;
}

void lineBres (int xa,int ya,int xb, int yb)
{   int x=xa,y=ya;
	int dx=abs(xb-xa),dy=abs(yb-ya);
	int s1=sign(xb-xa);
	int s2=sign(yb-ya);
	int interchange,t;
	if(dy>dx)
	{ t=dx;
	  dx=dy;
	  dy=t;
	  interchange=1;
	}
	else
	{ interchange=0;
	}
	int d=2*dy-dx;
	int ds=2*dy;
	int dt=2*(dy-dx);
	int count=0;
	putpixel(x,y,WHITE);

	for(int i=1;i<dx;i++)
	{
		if(d<0)
		{   if(interchange==1)
			{
				y=y+s2;

			}
			else
			{
			 x=x+s1;
			 d=d+ds;
			}
		}
		else
		{	y=y+s2;
			x=x+s1;
			d=d+dt;


		}
		if(i%10!=0&&count<=10)
			putpixel(x,y,WHITE);
		if(count==20)
			count=0;
		count++;

	}
}
int main()
{
	int gm, gd=DETECT;
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	line(getmaxx()/2,0,getmaxx()/2,getmaxy());
	line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
  for(int i=1;i<=4;i++)
  {
	switch(i)
	{
	 case 1:
		lineBres(0,getmaxy()/2-200,300,getmaxy()/2-200);
		break;
	 case 2:
		   //	lineBres(100,100,200,300);
		break;
	 case 3:
	   //	lineBres(100,200,200,300);
		break;
	  case 4:
	   //	lineBres(100,200,200,300);
		break;
	  default:
			printf("\n option not available\n");
	  }

   }
	getch();
	closegraph();

return 0;
}