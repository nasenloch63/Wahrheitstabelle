#include <stdio.h>

int main() {

    int zustand = 1;   // 1 = glücklich
    int befehl;

    printf("Befehl eingeben:\n");
    printf("1 = Blink\n");
    printf("2 = Spin\n");
    printf("3 = Beep\n");
    scanf("%d", &befehl);

    if (zustand == 1 && befehl == 1) {
        printf("Der Roboter blinkt froehlich.\n");
    }
    else if (zustand == 1 && befehl == 2) {
        printf("Der Roboter dreht sich begeistert.\n");
    }
    else if (zustand == 1 && befehl == 3) {
        printf("Der Roboter macht einen froehlichen Beep.\n");
    }

    else if (zustand == 2 && befehl == 1) {
        printf("Der Roboter blinkt langsam.\n");
    }
    else if (zustand == 2 && befehl == 2) {
        printf("Der Roboter moechte sich nicht drehen.\n");
    }
    else if (zustand == 2 && befehl == 3) {
        printf("Der Roboter macht einen traurigen Beep.\n");
    }

    else if (zustand == 3 && befehl == 1) {
        printf("Der Roboter blinkt muede.\n");
    }
    else if (zustand == 3 && befehl == 2) {
        printf("Der Roboter dreht sich langsam.\n");
    }
    else if (zustand == 3 && befehl == 3) {
        printf("Der Roboter macht einen leisen Beep.\n");
    }

    else if (zustand == 4 && befehl == 1) {
        printf("Der Roboter blinkt verwirrt.\n");
    }
    else if (zustand == 4 && befehl == 2) {
        printf("Der Roboter dreht sich planlos im Kreis.\n");
    }
    else if (zustand == 4 && befehl == 3) {
        printf("Der Roboter macht einen verwirrten Beep.\n");
    }

    else {
        printf("Ungueltige Eingabe!\n");
    }

    return 0;
}