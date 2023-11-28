#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d=0;

	clrscr();

	printf("enter the number=");
	scanf("%d",&a);
	b=a;
	while(b>0)
	{
		c=b%10;
		d=d*10+c;
		b=b/10;
	}
	printf("%d\n",d);

	getch();
}