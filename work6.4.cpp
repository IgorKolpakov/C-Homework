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

    for (int j=0;j<q;j++)
    {
        str[j]=str[j+1];
    }
    printf("\n Stroka posle udaleniy pervogo elementa \n");
    puts(str);
    
    char strmir[100];

    for(int j=strlen(str);j>0;j--)
    {
        strmir[strlen(str)-j] = str[j-1];       
    }
    strmir[strlen(str)] = str[strlen(str)];
    printf("\n Stroka posle \n");
    puts(strmir);

}
