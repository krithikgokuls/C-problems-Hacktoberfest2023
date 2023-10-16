#include <stdio.h>

int main() {
    int i;

    // Using a for loop to print in increasing order (1 to 100)
    printf("Printing in increasing order using for loop:\n");
    for (i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Using a while loop to print in decreasing order (100 to 1)
    printf("Printing in decreasing order using while loop:\n");
    i = 100;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }
    printf("\n");

    // Using a do-while loop to print in increasing order (1 to 100)
    printf("Printing in increasing order using do-while loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");

    return 0;
}
