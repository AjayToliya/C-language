#include<stdio.h>

main()
{
	cube();
}

cube()
{
	int number;
	
	printf("entre the number =");
	scanf("%d",&number);
	
	printf("the cube of number is=%d",number * number *number);
}
