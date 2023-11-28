#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;

	clrscr();

	for(a=1;a<=5;a++)
	{
		for(b=2;b<=a;b++)
		{
			printf(" ");
		}
		for(c=5;c>=a;c--)
		{
			printf("%d",c);
		}
		printf("\n");
	}
	getch();
}