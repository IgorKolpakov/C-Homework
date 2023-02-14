#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

int main()
{
	bool flag = true;
	std::cout << "Before:\n";
	char surname[5][20] = {"Pavlov", "Starkov", "Begunov",  "Semenov", "Anisimov"};
	for (int i = 0; i < 5; i++)
	{
		std::cout << surname[i] << "\n";
	}

	while (flag)
	{
		flag = false;
		for (int i = 0; i < 5 - 1; i++)
		{
			if ((int) surname[i][0] > (int) surname[i + 1][0])
			{
				flag = true;
				char temp[20]; 
				strcpy(temp, surname[i]);
				strcpy(surname[i],surname[i + 1]);
				strcpy(surname[i + 1], temp);
			}
		}
	}

	std::cout << "\n\nAfter:\n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << surname[i] << "\n";
	}
}
