#include<stdio.h>
#include<conio.h>
main()
{
	int a=12,b=6;

	clrscr();

	printf("addition of a and b is= %d + %d =%d\n",a,b,a+b);
	printf("subtration  of a and b is= %d - %d =%d\n",a,b,a-b);
	printf("multiplicantion  of a and b is= %d * %d =%d\n",a,b,a*b);
	printf("division of a and b is= %d / %d =%d\n",a,b,a/b);
	printf("module of a and b is=%d\n",a%b);



	printf("------------------\n");

	printf(" ||\t%d+%d=%d\n",a,b,a+b);
	printf(" ||\t%d-%d=%d\n",a,b,a-b);
	printf(" ||\t%d*%d=%d\n",a,b,a*b);
	printf(" ||\t%d/%d=%d\n",a,b,a/b);
	printf(" ||\t%d%%%d=%d\n",a,b,a%b);

	printf("------------------");





	getch();
}