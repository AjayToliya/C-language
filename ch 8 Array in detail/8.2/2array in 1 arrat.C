#include<stdio.h>
#include<conio.h>
main()
{
    int a[200],b[200],c[200],f,s,t=0,i,j;

    clrscr();

    printf("size of first arrry=");
    scanf("%d",&f);

    for(i=0;i<f;i++)
        {   
	        printf("a[%d] = ",i);
	        scanf("%d",&a[i]);
	        c[i] = a[i];
        }

    printf("size of first arrry=");
    scanf("%d",&s);

    t = f + s ;

    for(i=0;i<s;i++)
    {
	    printf("b[%d] = ",i);
	    scanf("%d",&b[i]);

	    for(j=0;j<s;j++)
	        {
	            c[j+f] = b[j] ;
	        }
    }

    for(i=0;i<t;i++)
        {
	        printf("c[%d] = %d\n",i,c[i]);
        }

    getch();
}
