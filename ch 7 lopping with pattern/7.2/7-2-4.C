#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;

	clrscr();

	for(a=5;a>=1;a--)
	{
		for(b=4;b>=a;b--)
		{
			printf(" ");
		}
		for(c=a;c>=1;c--)
		{
			printf("%d",c%2);
		}
		printf("\n");
	}
	getch();
}
