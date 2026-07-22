#include <stdio.h>

int main() {
    int A, B;

    printf("A | B | A AND B | A OR B\n");
    printf("-------------------------\n");

    A = 0;
    B = 0;
    printf("%d | %d |    %d    |   %d\n", A, B, A && B, A || B);

    A = 0;
    B = 1;
    printf("%d | %d |    %d    |   %d\n", A, B, A && B, A || B);

    A = 1;
    B = 0;
    printf("%d | %d |    %d    |   %d\n", A, B, A && B, A || B);

    A = 1;
    B = 1;
    printf("%d | %d |    %d    |   %d\n", A, B, A && B, A || B);

    return 0;
}