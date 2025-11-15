/*
autor: Mahdi Rahimi
datum: 10.11.2025
Beschreibung: realisieren Sie das Abgebildete Menu, welches be der Eingabe einer Wahl ein sinvolle Rückmeldung von sich gibt:

*/


#include <stdio.h>

int main() {
    int wahl;

    printf("Menu:\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Option 3\n");
    printf("4. Beenden\n");
    printf("Bitte wählen Sie eine Option (1-4): ");
    scanf("%d", &wahl);

    switch (wahl) {
        case 1:
            printf("Sie haben Option 1 gewählt.\n");
            break;
        case 2:
            printf("Sie haben Option 2 gewählt.\n");
            break;
        case 3:
            printf("Sie haben Option 3 gewählt.\n");
            break;
        case 4:
            printf("Beenden des Programms.\n");
            break;
        default:
            printf("Ungültige Wahl. Bitte wählen Sie eine Zahl zwischen 1 und 4.\n");
            break;
    }

    return 0;
}