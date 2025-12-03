#include <stdio.h>

int pascalValue(int *n, int *r)
{
    if (*r == 0 || *r == *n)
    {
        return 1;
    }
    else
    {
        int n1 = *n - 1;
        int r1 = *r - 1;
        int n2 = *n - 1;
        int r2 = *r;

        return pascalValue(&n1, &r1) + pascalValue(&n2, &r2);
    }
}

int main()
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            int a = i;
            int b = j;
            int value = pascalValue(&a, &b);
            printf("%d ", value);
        }

        printf("\n");
    }

    return 0;
}
