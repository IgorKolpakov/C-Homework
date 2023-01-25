#include<stdio.h>

int main()
{
    int yr,rem1,rem2;
    printf("Enter year: ");
    scanf("%d",&yr);
    rem1 = yr%4 ; 
    rem2 = yr%100; 
    if((rem1 == 0) && (rem2!=0) || yr%400 == 0)
    {
        printf("Year visokos",yr);
    }
    else
    {
        printf("Year ne visokos",yr);
    }
}
