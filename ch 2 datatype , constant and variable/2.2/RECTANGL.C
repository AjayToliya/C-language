#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
 
void main()
{
	float widht,height,area;

	clrscr();

	p("enter the widht=");
	s("%f",&widht);
	p("enter the height=");
	s("%f",&height);

	area=widht*height;

	p("the area of a rectangle=%f",area);

	getch();

}