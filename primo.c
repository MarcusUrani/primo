#include <stdio.h>

int main(void)
{
    int n, i, j;
    char *numbers;
    scanf("%d", &n);
    numbers = calloc(n + 1, sizeof(char));
    for (i = 2; i <= n; i++)
    {
        if (numbers[i] == 0)
        {
            printf("%d ", i);
            for (j = i; j < n; j += i)
            {
                numbers[j] = 1;
            }
        }
    }
    free(numbers);
    return 0;
}