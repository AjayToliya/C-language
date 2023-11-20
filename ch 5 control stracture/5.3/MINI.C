#include<stdio.h>
#include<conio.h>

main()

{
	int a,b,c;

	clrscr();

	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	printf("enter the value of c=");
	scanf("%d",&c);

	(a==b && b==c)
		?printf("all are same %d",a)
		:(a==b)
		       ?printf("%d and %d are same",a,b)
		       :(a==c)
			      ?printf("%d and %d are same",a,c)
			      :(b==c)
				     ?printf("%d and %d are same",b,c)
				     :(a<b && a<c)
						?printf("%d is minimum",a)
						:(b<a && b<c)
							?printf("%d is minimum",b)
							:printf("%d is minimumm",c);




	getch();

}