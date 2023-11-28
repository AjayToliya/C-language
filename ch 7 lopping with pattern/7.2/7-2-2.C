#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;

	clrscr();

	for(a=5;a>=1;a--)
	{
		for(b=2;b<=a;b++)
		{
			printf(" ");
		}
		for(c=a;c<=5;c++)
		{
			printf("%d",c);
		}
		printf("\n");
	}
	getch();
}