#include<stdio.h>
#include<conio.h>
main()
{
	int a,n;

	clrscr();

	printf("enter the value of n=");
	scanf("%d",&n);
	printf("enter the value of a=");
	scanf("%d",&a);

	while(n<=a)
	{
		if(n%4==0)
		printf("%d ",n);
		n++;
	}

	getch();

}