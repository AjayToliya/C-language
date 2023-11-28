#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;

	clrscr();

	printf("enter the number=");
	scanf("%d",&a);

	b=a%10;

	printf("the last digit is %d\n",b);

	while(a>=10)
	{
		a=a/10;
	}
	c=a;

	d=c+b;

	printf("the first digit is %d\n",c);

	printf("the sum of first digit and last digit is%d",d);

	getch();
}