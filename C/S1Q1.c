#include <stdio.h>

int main(void) {
    int num1, num2;

    printf("Enter two numbers: ");

    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("\nSum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);

    if (num2 != 0) {
        printf("Quotient: %d\n", num1 / num2);
        printf("Remainder: %d\n", num1 % num2);
    } else {
        printf("Division and remainder are not possible with zero.\n");
    }

    return 0;
}