#include<stdio.h>
#include<string.h>
main()
{
	char name[100],i;
	int j,n;
	
	printf("Enter ANy String : ");
	gets(name);
	
	printf("Frequency of each letter:\n");

	for(i='A';i<'Z';i++)
	{
		n = 0;
		for(j=0;j<strlen(name);j++)
		{
			if(i==name[j])
			{
				n++; 
			}
		}
		if(n>0)
		{
			printf("'%c' --> %d \n",i,n);
		}
	}
	
	for(i='a';i<'z';i++)
	{
		n = 0;
		for(j=0;j<strlen(name);j++)
		{
			if(i==name[j])
			{
				n++; 
			}
		}
		if(n>0)
		{
			printf("'%c' --> %d \n",i,n);
		}
	}
}

	
