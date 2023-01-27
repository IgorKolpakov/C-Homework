#include <iostream>

#include <cmath>

#include <string>


int main()

{

    int yr,num1,num2;

    printf("Enter year: ");

    scanf("%d",&yr);

    num1 = yr%4 ;

    num2 = yr%100;

    if((num1 == 0) && (num2!=0) || yr%400 == 0)

    {

        printf("Year visokos",yr);

    }

    else

    {

        printf("Year ne visokos",yr);

    }
    
    {

    std::string colors[5] = {"Green", "Red", "Yellow", "White", "Black"};

    std::string animals[12] = {"Rat", "Cow", "Tiger", "Rabbit", "Dragon", "Snake",

                                "Horse", "Sven", "Ape", "Chicken", "Dog",  "Pig"};

    int year, temp;

   printf("Enter year");

    std::cin >> year;


    if(year!=0)

    {

        temp=year-4;

        if(year<0) ++temp;

        if(temp<=0) temp+=(abs(temp)/60)*60+60;

        std::cout << " " << colors[(((temp)%10)/2)] << " " << animals[temp%12];

   

    } else {

        std::cout << "\nZero year does not exist";

    }

    system("pause");

    return 0;

               }


}
