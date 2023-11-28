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
		for(c=a;c>=1;c--)
		{
			printf("%d",c);
		}
		printf("\n");
	}
	getch();
}