#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
#include<windows.h>

void array_completion(int mas[], int a)
{
    for(int i=0; i<a; i++)
    {        
        mas[i] = rand();
    }
    printf("\n Zapolnen mas \n");
    for(int i=0; i<a; i++)
    {
        printf("%3i  ",mas[i]);
    }
}



int main()
{
    srand(time(NULL));
    int mas1[100];
    int mas2[100];
    int a = 0;
    int b = 0;
    while ((a < 1) || (a > 100))
    {
        printf("Vedite kol elem pervogo mas ot 1 do 100 \n ");
        scanf("%i",&a);
    }
    while ((b < 1) || (b > 100))
    {
        printf("Vedite kol elem vtorogo mas ot 1 do 100 \n ");
        scanf("%i",&b);
    }
    array_completion(mas1, a);
    array_completion(mas2, b);

    return 1;
}
