#include<graphics.h>
#include<conio.h>
Void main()
{
	int gd, gm, i, radius = 70;	
	char ch;

detectgraph (&gd, &gm);
initgraph(&gd, &gm);

for(i=1; i<=10; i++)
{
circle (200,200, radius);
radius = radius+10;
		}
	ch = getch();
	if(ch == 13)
	
circle (250, 200, 70);

getch();
	}


