#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;

	clrscr();

	printf("enter the last digit of series=");
	scanf("%d",&a);

	for(b=1;b<=a;b++)
	{
		if(b%3==0 && b%5==0)
		{
			printf("%d ",b);
		}

	}

	getch ();
}