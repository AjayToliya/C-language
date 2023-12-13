#include<stdio.h>
main()
{
	int n;
	
	printf("enter the string length=");
	scanf("%d",&n);
	
	char name[n];
	int i;
	
	printf("enter any string=");
	scanf("%s",&name);
	
	for(i=0;i<n;i++)
	{
		if(name[i]>=97 && name[i]<=122)
		{
			name[i]=name[i]-32;
		}
	}
	printf("Uppercase string= %s",name);
}
