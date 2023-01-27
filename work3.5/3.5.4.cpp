#include <stdio.h>

main ()
{
	int i = 5;
	int sum = 15;
	
	while(i < 15)
	{
		sum = sum + i;
		i = i + 1;
	}
	printf("%d",sum);
}
