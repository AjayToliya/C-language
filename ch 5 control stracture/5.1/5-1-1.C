#include<stdio.h>
#include<conio.h>

main()
{
	int  a,b;

	clrscr();

	printf("enter the value a=");
	scanf("%d",&a);
	printf("enter the value b=");
	scanf("%d",&b);

	if(a<b)
	{
		printf("a is minimum");
	}
	else
	{
		printf("b is minimum");
	}

	getch();

}