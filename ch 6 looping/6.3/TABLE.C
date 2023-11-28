#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;

	clrscr();

	printf("enter the value=");
	scanf("%d",&a);

	for(b=1;b<=10;b++)
	{
		printf("%d * %d = %d\n",a,b,a*b);
	}
	getch();

}