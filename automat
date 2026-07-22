#include <stdio.h>

int main() {

    int kontostand = 1000;
    int betrag;

    printf("Kontostand: %d Euro\n", kontostand);
    printf("Wie viel moechten Sie abheben? ");
    scanf("%d", &betrag);

    if (betrag > 0 && betrag <= kontostand && betrag <= 500) {
        printf("Transaktion genehmigt.\n");
    }
    else {
        printf("Transaktion abgelehnt.\n");
    }

    return 0;
}