#include<stdio.h>

main()
{
    int n, numb, min, max, sum;
    printf("Vedite kolichestvo chisel: ");
    scanf("%i",&n);
    printf("Vedite pervoe chislo: ");
    scanf("%i", &numb);
    min = numb;
    max = numb;
    sum = numb;
    for(int i = 0; i < n-1; i++)
    {
        printf("Vedite sleduychee chislo: ");
        scanf("%i", &numb);
        if (min > numb)
        {
            min = numb;
        }
        if (max < numb)
        {
            max = numb;
        }
        sum = sum + numb;
    }    
    printf("min=%i\nmax=%i\nsum=%i\navg=%f\n", min, max, sum,((float)sum / (float)n));

}
