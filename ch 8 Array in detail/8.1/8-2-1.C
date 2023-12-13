#include<stdio.h>
#include<conio.h>
main()
{
	float i,n,a[100],b=0,c;

	clrscr();

	printf("enter the number of student=");
	scanf("%f",&n);

	for(i=1;i<=n;i++)
	{
		printf("enter the marks=");
		scanf("%f",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		c++;
	}

	printf("length of an array=%f",c);
	getch();
}