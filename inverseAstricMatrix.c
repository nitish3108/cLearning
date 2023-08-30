#include <stdio.h>

void printInvertedEquilateralTriangle(int rows) {
    int i, j;

    for (i = rows; i >= 1; i--) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    int rows = 5;
    //printf("Enter the number of rows: ");
    //scanf("%d", &rows);

    printInvertedEquilateralTriangle(rows);

    return 0;
}
