#include<stdio.h>
#include<conio.h>
main()
{
	int a,b=0,c=1;

	clrscr();

	printf("enter the number=");
	scanf("%d",&a);

	while(a>0)
	{
	b=a%10;
	a=a/10;
	b=c++;
	}
	printf("total number in value are=%d",b);

	getch();
}