#include <stdio.h>

main()

{
	printf("Tablisa umnosheniy na 5\n");
	for (int i = 1; i <= 10; i++)
	{
		printf("%d * 5 = %d\n", i, i * 5);
	}

	int i;
	printf("Ugadai chislo: \n");
	scanf("%d", &i);

	while (i !=7)
	{
		if (i>7)
			printf("Chislo bolshe\n");
		else
			printf("Chislo menshe\n");
		if (i>10)
			printf("Bolshe 10\n");
		else
			if (i<10)
			printf("Menshe 10\n");
		else
			printf("Ne pravilno\n");
		if (i%2 == 0)
			printf("Chislo chetnoe\n");
		else
			printf("Chislo ne chetnoe\n");
		if (i%3 == 0)
			printf("Chislo delitsa na 3\n");
		else
			printf(" Chislo ne delitsa na 3\n");
		
		printf("Poprobue eche: \n");
		scanf("%d", &i);
	}
	printf("Super,ti Ugadal!\n");
}
