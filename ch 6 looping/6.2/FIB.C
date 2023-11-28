#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e;

	clrscr();

	printf("enter the last value=");
	scanf("%d",&d);

	a=0;
	b=1;
	c=0;

	for(e=1;e<=d;e++)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;

	}
	getch();
}
