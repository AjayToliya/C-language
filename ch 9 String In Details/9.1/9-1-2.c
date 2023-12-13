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
		if(name[i]>=65 && name[i]<=90)
		{
			name[i]=name[i]+32;
		}
	}
	printf("lowercase string= %s",name);
}
