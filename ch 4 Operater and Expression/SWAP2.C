#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;

	clrscr();

	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);


	printf("a=%d\n",a);
	printf("b=%d\n",b);

	b=a+b;
	a=b-a;
	b=b-a;

	printf("a = %d\n",a);

	printf("b = %d\n",b);

	getch();

}