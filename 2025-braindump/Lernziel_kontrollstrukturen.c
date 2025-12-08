/*
Autor: mahdi-R
Datum: 07.12.2025
Lernziel: Sie können mehrere Kontrollstrukturen miteinander kombinieren


*/



#include <stdio.h>

int main() {

    // Deklarationen
    int wahl = 0;
    int zahl;
    // Titel
    printf("=== Mini-Demo: Kontrollstrukturen ===\n");

    // do-while: Menü wiederholen, bis der Benutzer 0 wählt
    do {
        printf("\nMenü:\n");
        printf("1 - Gerade oder ungerade prüfen\n");
        printf("2 - Zählen bis zu einer Zahl\n");
        printf("0 - Beenden\n");
        printf("Ihre Auswahl: ");
        scanf("%d", &wahl);

        // switch: wählt, was getan wird
        switch (wahl) {
            case 1:
                printf("Geben Sie eine Zahl ein: ");
                scanf("%d", &zahl);

                // if-else: prüft Zahl
                if (zahl % 2 == 0) {
                    printf("%d ist gerade.\n", zahl);
                } else {
                    printf("%d ist ungerade.\n", zahl);
                }
                break;

            case 2:
                printf("Bis zu welcher Zahl soll gezählt werden? ");
                scanf("%d", &zahl);

                // while: zählt von 1 bis zur Zahl
                int i = 1;
                while (i <= zahl) {
                    printf("%d \n", i);
                    i++; // re-initialisierung
                }
                printf("\nFertig!\n");
                break;

            case 0:
                printf("Programm wird beendet.\n");
                break;

            default:
                printf("Ungültige Auswahl!\n");
        }

    } while (wahl != 0);

    return 0;
}