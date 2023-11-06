#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
	float radius;
	const float pi=3.14;

	clrscr();

	p("enter the radius=");
	s("%f",&radius);

	p("the area of a circle=%f",pi*radius*radius);

	getch();

}