#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;

	clrscr();

	printf("enter the first value =");
	scanf("%d",&a);
	printf("enter the last value=");
	scanf("%d",&b);

	for(c=a;c<=b;c++)
	{
	   for(a=a;a<=b;a++)
		{
			for(d=1;d<=10;d++)
			{
				printf("%d * %d = %d\n",a,d,a*d);
			}
			printf("\n");
	    }
	}

	getch();

}