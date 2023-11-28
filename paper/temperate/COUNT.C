#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c=0;

	clrscr();

	printf("enter the number=");
	scanf("%d",&a);

	while(a!=0)
	{
		b=a%10;
		a=a/10;
		c++;
	}

	printf("total digits in number are %d",c);

	getch();
}