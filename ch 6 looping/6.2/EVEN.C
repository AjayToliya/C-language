#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;

	clrscr();

	a=1;

	printf("enter the last digit=");
	scanf("%d",&b);

	do
	{    	if(a%2==0)
		{
			printf("%d ",a);
		}
		a++;
	}
	while(a<=b);

	getch ();
}