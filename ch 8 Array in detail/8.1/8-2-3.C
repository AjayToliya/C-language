#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,a[100],b[100],c[100];

	clrscr();

	printf("enter the number of student=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("enter array A's elements=");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("enter array B's elements=");
		scanf("%d",&b[i]);
	}
	for(i=1;i<=n;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=1;i<=n;i++)
	{
		printf("Array C[%d]=%d\n",i,c[i]);
	}
	getch();
}