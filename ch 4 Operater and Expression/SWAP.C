#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;

	clrscr();

	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);

	printf("a=%d",a);
	printf("b=%d",b);

	c=a;
	a=b;
	b=c;

	printf("a = %d",a);
	printf("b = %d",b);

	getch();

}