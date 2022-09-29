#include <stdio.h>

int verificaPrimo(value)
{
    if (value <= 1)
    {
        printf("\nComposto");
    }
    else if (value >= 2)
    {
        printf("\nPrimo");
    }

    return 0;
}

int main(void)
{
    int n, i;
    scanf("%d", &n);
    float numbers[n];
    char results[n];
    int primo = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%f", &numbers[i]);
    }
    for (i = n; i > 0; i--)
    {
        verificaPrimo(numbers[i]);
    }
    return 0;
}