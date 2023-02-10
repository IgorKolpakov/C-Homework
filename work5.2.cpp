#include<stdio.h>

main()
{
    int mas[100][100];
    int n = 0;
    int m = 0;
    
    while ((n < 1) || (n > 100))
    {
        printf("Vedite kol strok mas ot 1 do 100 \n");
        scanf("%i",&n);
    }
    while ((m < 1) || (m > 100))
    {
        printf("Vedite kol strok mas ot 1 do 100 \n");
        scanf("%i",&m);
    }

    printf("Vodite znacheniy mas postrochno cherez Enter \n");

    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            scanf("%i",&mas[j][i]);
        }
    }
    
    printf("\nVedeniy mas \n");
    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            printf("%3i",mas[j][i]);
        }
        printf("\n");
    }
    
}
