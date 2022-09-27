#include <stdio.h>

int main(void)
{
    int n, i;
    scanf("%d", &n);
    float numbers[n];
    for (i = 0; i < n; i++)
    {
        scanf("%f", &numbers[i]);
    }

    printf("%.1f\n", numbers[1]);
    return 0;
}