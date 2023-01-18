#include <stdio.h>

main()

{
	int a,b;
	
	printf("a=");
	scanf("%i",&a);
	
	printf("b=");
	scanf("%i",&b);
	
	if(a>b)
	{
		printf("A > B");
	}
	else
	{
		if(a==b)
		{
			printf("A = B");
		}
		else
		{
			printf("B > A");
		}
	}
}
