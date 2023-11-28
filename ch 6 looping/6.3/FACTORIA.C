#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,sum=1;

	clrscr();
	printf("enter the last number=");
	scanf("%d",&b);

	for(a=1;a<=b;a++)
	{
		sum=sum*a;
	}
	printf("factorial=%d",sum);
	getch();
}