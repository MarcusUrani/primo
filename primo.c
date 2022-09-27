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
    return 0;
}