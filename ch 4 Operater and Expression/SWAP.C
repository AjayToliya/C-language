#include<stdio>
#include<conio>
{
	int a,b,c;

	clrscr();

	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);

	printf("a=%d",a);
	printf("b=%d",b);

	a=b;
	b=c;
	c=a;

	printf("a = %d",a);
	printf("b = %d",b);

	getch();

}