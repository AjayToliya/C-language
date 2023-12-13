#include<stdio.h>
#include<conio.h>
 
main()
{
    int a[100],i,n,b=0,c=0;

    clrscr();
 
    printf("enter the array=");
    scanf("%d",&n);
 
    for(i=0;i<n;i++)
    {
    	printf("enter the elements of array a[%d]=",i);
    	scanf("%d",&a[i]);
    }

   	for(i=0;i<n;i++)
   	{
      	if(a[i]>b)
      	{
        	c=b;
        	b=a[i];
        }
        else if(a[i]>c && a[i]<b)
        {
        	c=a[i];
        }
    }

    printf("the second largest number is=%d\n",c);
 
    getch();
}
