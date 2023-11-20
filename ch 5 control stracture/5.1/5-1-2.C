#include<stdio.h>
#include<conio.h>

main()
{
	int  a;

	clrscr();

	printf("enter the value a=");
	scanf("%d",&a);

	if(a>0)
	{
		printf("a is positive");
	}
	else if(a<0)
	{
		printf("b is negative");
	}
	else
	{
		printf("a is 0");
	}
	getch();

}