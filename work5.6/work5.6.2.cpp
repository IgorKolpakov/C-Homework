#include<stdio.h>


main()
{
    int mas[100][100];

    int n = 0;
    int m = 0;

    while ((n < 1) || (n > 100))
    {
        printf("Vedite kil strok mas ot 1 do 100 \n ");
        scanf("%i",&n);
    }
    while ((m < 1) || (m > 100))
    {
        printf("Vedite kol stolb mas ot 1 do 100 \n ");
        scanf("%i",&m);
    }

    printf("Vodite znacheniy mas \n");

    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            scanf("%i",&mas[j][i]);
        }
    }

    printf("\nIshodniy mas\n\n");

    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            printf("%3i",mas[j][i]);
        }
        printf("\n");
    }    


    printf("\nMas posle smeni mestami pervogo i poslednego stolbsa\n\n");

    for(int i=0; i<m; i++)
    {
        int q=mas[i][0];
        mas[i][0] = mas[i][n-1];
        mas[i][n-1] = q;
    }

    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            printf("%3i",mas[j][i]);
        }
        printf("\n");
    }
}
