#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;

	clrscr();

	for(a=5;a>=1;a--)
	{
		for(c=1;c<=a;c++)
		{
			printf("%d",c);
		}
		for(b=a;b<=4;b++)
		{
			printf("  ",b);
		}
		for(c=a;c>=1;c--)
		{
			printf("%d",c);
		}
		printf("\n");
	}
	getch();
}
