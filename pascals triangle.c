#include <stdio.h>

int main() {
    int rows, i, j, num;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        /* Print spaces */
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        num = 1;

        /* Print numbers */
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
