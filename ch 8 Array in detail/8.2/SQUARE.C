#include<stdio.h>
#include<conio.h>
main()
{
	int a[100],b,c;

	clrscr();

	printf("size of array=");
	scanf("%d",&b);

	for(c=1;c<=b;c++)
	{
		scanf("%d",&a[c]);
	}
	for(c=1;c<=b;c++)
	{
		a[c]=a[c]*a[c];
		printf("squre=%d\n",a[c]);
	}
	getch();
}