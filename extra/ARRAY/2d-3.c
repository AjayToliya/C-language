#include<stdio.h>
#include<conio.h>
 
main()
{
    int a[100][100],i,r,c,j,sum=0;
    
    clrscr();
 
    printf("enter the size of row=");
    scanf("%d",&r);
 
    printf("enter the size of column=");
    scanf("%d",&c);
 
    for(i=0;i<r;i++)
  	{
    	for(j=0;j<c;j++)
    	{
        	printf("a[%d][%d]=",i,j);
        	scanf("%d",&a[i][j]);
    	}
    }

	for(i=1;i<r-1;i++)
    {
        for(j=1;j<c-1;j++)
        {
    		sum=sum+a[i][j];
     	}
    }

    printf("sum of inner elements=%d\n",sum);
 
    getch();
}
