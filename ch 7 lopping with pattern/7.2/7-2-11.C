#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;

	clrscr();

	for(a=1;a<=5;a++)
	{
		for(b=a;b<=4;b++)
		{
			printf(" ");
		}
		for(c=a*2-1;c>=1;c--)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}