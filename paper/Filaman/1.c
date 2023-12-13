#include <stdio.h>

main()
{
    char name[100],name2[100];  
    int i=0,n=0,c=0,f=0;
 
    printf("Enter  the string : ");
    scanf("%s",&name);
    
    for(i=0;name[i]!='\0';i++)
    {
    	c++;
	}

    for(i=c-1;i>=0;i--)  
    {
    	name2[n++]=name[i];
 	}
 	
 	for(i=0;i<=c;i++)
 	{
 		if(name[i]!=name2[i])
 		{
 			f=1;
 			break;
		}
	}
 		
 	if(f==0)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
 
}
