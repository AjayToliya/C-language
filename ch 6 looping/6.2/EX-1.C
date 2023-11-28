#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;

	clrscr();

	printf("enter the value=");
	scanf("%d",&a);
	printf("enter the value=");
	scanf("%d",&b);
	d=1;
	for(c=1;c<=b;c++)
	{
		d=d*a;
		printf("%d ",d);
	}
	getch();
}