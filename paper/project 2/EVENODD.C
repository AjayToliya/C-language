#include<stdio.h>
#include<conio.h>

main()
{
	int a;

	clrscr();

	printf("enter the value=");
	scanf("%d",&a);

	a%2==0?printf("the number is even"):printf("the number is odd");

	getch ();

}