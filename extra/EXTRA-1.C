#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;

	clrscr();

	printf("enter the value of a=");
	scanf("%d",&a);

	b=a%10;

	while(a>=10)
	{
		a=a/10;
	}

	c=a;

	printf("first digit =%d and last digit =%d\n",c,b);

	getch();

}