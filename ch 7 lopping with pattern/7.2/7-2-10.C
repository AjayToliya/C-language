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
		for(c=1;c<=a;c++)
		{
			printf("%d",c);
		}
		for(c=a-1;c>=1;c--)
		{
			printf("%d",c);
		}
		printf("\n");
	}
	getch();
}