#include<stdio.h>
#include<string.h>
void main()
{
	char pass[10];
	int i,lpass;
	
	printf("enter the pass=");
	gets(pass);
	
	lpass=strlen(pass);
		
	if(lpass>6)
	{
		for(i=0;i<lpass;i++)
		{
			if((pass>=65 && pass<=90) && (pass>=32 && pass<=64) )
			{
				printf("strong pass");
			}
			else 
			{
				printf("done");
			}
		}
	}
	else 
	{
		printf("not strong pass");
	}
	
}
