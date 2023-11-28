#include<stdio.h>
#include<conio.h>
main()
{

    int a,b,c;

    clrscr();

    for(a=5;a>=1;a--)
    {
		for(c=1;c<=a;c++)
		{
		    printf("%d",c);
		}
		for(b=a;b<=4;b++)
		{
			    printf("  ",b);
		}
		for(c=a;c>=1;c--)
		{
		    printf("%d",c);
		}
		printf("\n");
    }

    for(a=1;a<=5;a++)
   	{
		for(b=1;b<=a;b++)
		{
	    	printf("%d",b);
		}
		for(c=a;c<=4;c++)
		{
	    	printf("  ");
		}
		for(b=a;b>=1;b--)
		{
	   		printf("%d",b);
		}
	printf("\n");
    }

    getch();
}