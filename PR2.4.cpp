#include <stdio.h>

int main()
{	
	int day;
	printf("Day of the week? ");
	scanf("%i", &day);
	
	switch(day)
	{
		case 1:
			{
				printf("Monday");	
			}
			break;
			
		case 2:
			{
				printf("Tuesday");	
			}
			break;
			
		case 3:
			{
				printf("Wednesday");	
			}
			break;
			
		case 4:
			{
				printf("Thursday");	
			}
			break;
			
		case 5:
			{
				printf("Friday");	
			}
			break;
			
		case 6:
			{
				printf("Saturday");	
			}
			break;
			
		case 7:
			{
				printf("Sunday");	
			}
			break;				
		default:
		{
			printf("Error, there is no such day of the week");
		}
	}	
}
