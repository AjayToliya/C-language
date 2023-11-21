#include<stdio.h>
#include<conio.h>
main()
{
	float a,b,c,d;

	printf("enter the value=");
	scanf("%f",&a);

	if(a<=50)
	{
		b=a*.50;
	}
	else if(a<=150)
	{
		b=25+(a-50)*.75;
	}
	else if(a<=250)
	{
		b=100+(a-150)*1.20;
	}
	else
	{
		b=220+(a-250)*1.50;
	}

	c=b*.20;
	d=c+b;

	printf("bill=Rs%.2f",d);

	getch ();
	return 0;

}