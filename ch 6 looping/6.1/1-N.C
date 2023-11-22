#include<stdio.h>
#include<conio.h>

main()
{
	int a,n;
	a=1;
	clrscr();

	printf("enter the value of n=");
	scanf("%d",&n);


	while(a<=n)
	{
		printf("%d ",a);
		a++;
	}

	getch();
}