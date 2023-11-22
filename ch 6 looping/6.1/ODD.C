#include<stdio.h>
#include<conio.h>

main()
{
	int a,n;
	a=1;
	clrscr();

	printf("enter the value of n=");
	scanf("%d",&n);

	while(n>=a)

	{
		if(n%2!=0)
		printf("%d ",n);
		n--;
	}

	getch();

}