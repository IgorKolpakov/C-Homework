#include <stdio.h>

main()
{
	int sum = 0;
	
	for(int i = 1; i < 100; i++)
	{
		sum = sum + i;
	}
	printf("%i",sum);
}
