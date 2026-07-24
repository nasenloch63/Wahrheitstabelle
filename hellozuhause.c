#include <stdio.h>
int main() {
    int geheim = 42; 
    int eingabe; 
    printf("Rate die geheime Zahl: ");
    scanf("%d", &eingabe);
    if (eingabe == geheim) {
        printf("Richtig! Die geheime Zahl ist %d.\n", geheim);
    } else {
        printf("Falsch! Versuche es noch einmal.\n");
    }
    return 0;   
}