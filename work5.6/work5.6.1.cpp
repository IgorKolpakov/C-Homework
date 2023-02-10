#include<stdio.h>

main()
{
    int mas[100][100];

    int n = 0;
    int m = 0;

    while ((n < 1) || (n > 100))
    {
        printf("Vedite kol strok mas ot 1 do 100 \n ");
        scanf("%i",&n);
    }
    while ((m < 1) || (m > 100))
    {
        printf("Vedite kol stolb mas ot 1 do 100 \n ");
        scanf("%i",&m);
    }

    printf("Vodite znacheniy mas cherez  Enter \n");

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

    printf("\nMas posle sortirovki\n\n");
    bool fl;
    for(int i=0;i<n;i++)
    {
        fl = true;
        while(fl)
        {
            fl = false;
            for(int j=0;j<m-1;j++) 
            {
                if(mas[i][j] > mas[i][j+1])
                {
                    int q=mas[i][j];
                    mas[i][j] = mas[i][j+1];
                    mas[i][j+1] = q;
                    fl = true;
                }
            }
        }
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
