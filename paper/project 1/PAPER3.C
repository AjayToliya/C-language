#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;

	clrscr();

	printf("enter the first engle=");
	scanf("%d",&a);
	printf("enter the second engle=");
	scanf("%d",&b);

	c=a+b;

	d=180-c;

	printf("value of third engle=%d",d);

	getch();

}