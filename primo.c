#include <stdio.h>
#include <stdbool.h>

bool verificaPrimo(int number);

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
    for (i = 0; i < n; i++)
    {
        verificaPrimo(numbers[i]);
    }
    return 0;
}

bool verificaPrimo(int number)
{
    printf("%.0f\n", number);
    // if (value <= 1)
    // {
    //     printf("\nComposto");
    // }
    // else if (value >= 2)
    // {
    //     printf("\nPrimo");
    // }

    return 0;
}