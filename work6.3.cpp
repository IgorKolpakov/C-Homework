#include<stdio.h>
#include<string.h>

main()
{
    char str[100];
    int q = 0;

    while ((q == 0) || (q > 99) )
    {    
        printf("Vedite stroku latin\n");
        gets(str);
        q  = strlen(str);
    }

    printf("\nVtoroi element stroki %c", str[1]);
    printf("\n\n");

    
    printf("Posledniy element stroki %c", str[q-1]);
    printf("\n\n");

    int a, b;
    
    while (((a < 1) || (a > q)) || (b < 1) || (b > q))
    {
        printf("Vsego elem v stroke %i\n", q);
        printf("Vedite elem stroki, kot nado pomen mestami \n");
        printf("Numer nachinaetsy s edinitsy\n");
        scanf("%i",&a);
        scanf("%i",&b);
    }

    char c = str[a-1];
    str[a-1] = str[b-1];
    str[b-1] = c;
    printf("Stroka posle perestanovki elementov \n");
    puts(str);

    int d = 0;
    while ((d < 1) || (d > q))
    {
        printf("\nVedite elem stroki, kot nado udalit \n");
        scanf("%i",&d);
    }

    for (int j=d-1;j<q;j++)
    {
        str[j]=str[j+1];
    }
    printf("\nStroka posle udaleniy elem \n");
    puts(str);
    
}
