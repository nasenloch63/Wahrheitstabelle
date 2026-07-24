#include <stdio.h>

int main() {
    int zahl1;
    int zahl2;
    int zahl3;
    int groessteZahl;

    printf("Gib drei Zahlen ein: ");
    scanf("%d %d %d", &zahl1, &zahl2, &zahl3);

    groessteZahl = zahl1;

    if (zahl2 > groessteZahl) {
        groessteZahl = zahl2;
    }

    if (zahl3 > groessteZahl) {
        groessteZahl = zahl3;
    }

    printf("Die groesste Zahl ist %d\n", groessteZahl);

    return 0;
}