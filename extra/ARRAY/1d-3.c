#include<stdio.h>
#include<conio.h>
 
main()
{
    int i,a[100],n,j,d;

    clrscr();
 
    printf("enter the array=");
    scanf("%d",&n);
 
    for(i=0;i<n;i++)
    {
    	printf("enter the elements a[%d]=",i);
     	scanf("%d",&a[i]);
    }
 
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
                if(a[i]>a[j])
                {
                    d=a[i];
                    a[i]=a[j];
                    a[j]=d;
                }
        }
    }

    printf("accending order=");

    for(i=0;i<n;i++)
  	{
       	printf("%d ",a[i]);
  	}
    getch();
}
