#include<stdio.h>
#include<conio.h>
main()
{
	int a;

	clrscr();

	a='a';

	do{
		printf("%c ",a);
		a+=4;
	}while(a<='z');

	getch();
}