#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,array[100],e=0;

	clrscr();

	printf("enter the first year =");
	scanf("%d",&a);
	printf("enter the last year =");
	scanf("%d",&b);

	for(c=a;c<=b;c++)
	{
		if(c%2==0)
		{
			array[e]=c;
			e++;
		}
	}
	for(c=0;c<e;c++)
	{
		printf("array[%d]=%d\n",c,array[c]);
	}
	getch();
}