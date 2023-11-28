#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();

	a=1;
	do
	{
		printf("%d ",a);
		a++;
	}
	while(a<=10);

	getch();
}