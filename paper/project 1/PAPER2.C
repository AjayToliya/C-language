#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	float sa,hra,da,ta;

	clrscr();

	p("enter the bas salary=");
	s("%f",&sa);
	p("enter the HRA=");
	s("%f",&hra);
	p("enter the DA=");
	s("%f",&da);
	p("enter the TA=");
	s("%f",&ta);

	hra=sa*(hra/100);

	da=sa*(da/100);

	ta=sa*(ta/100);

	p("the salary is=%f",sa+hra+da+ta);

	getch();

}