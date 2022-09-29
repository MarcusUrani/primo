#include <stdio.h>

int main(void)
{
    int n, i;
    scanf("%d", &n);
    float numbers[n];
    char results[n];
    for (i = 0; i < n; i++)
    {
        scanf("%f", &numbers[i]);
    }
    for (i = n; i > 0; i--)
    {
        printf("%f ", numbers[i]);
    }
    return 0;
}