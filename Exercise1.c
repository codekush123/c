#include <stdio.h>

long long int calculate_exponent(int base, int exponent) {
    long long int result = 1;
    int i;
    for (i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    char answer;
    do {
        int base, exponent;
        printf("Enter the base (integer):\n");
        scanf("%d\n", &base);
        printf("Enter the exponent (positive integer):\n");
        scanf("%d\n", &exponent);
        long long int result = calculate_exponent(base, exponent);
        printf("%d^%d = %lld.\n", base, exponent, result);
        printf("Do you want to continue? (yes = y, no = any other key)\n");
        scanf(" %c\n", &answer);
    } while (answer == 'y' || answer == 'Y');
    return 0;
}
