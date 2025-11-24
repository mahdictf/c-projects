/*
autor: mahdi
datum: 24.11.2025
aufgabe 6-7: erstellen Sie einen temperaturumrechner von Celsius - Fahrenheit bei dem der Benutzer die Art der Umrechnung wählen oder das Programm mit 0 beenden kann.

ziel: Sie können fusgesteuerte do.. wheile schleifen mit if else (oder switch case ) kombinieren.


*/


#include <stdio.h>
int main(){
    // Deklaration
    float celsius, fahrenheit;
    int wahl;

    do {
        // Titel
        printf("Temperaturumrechner\n");
        printf("=========================\n");
        printf("1. Celsius zu Fahrenheit\n");
        printf("2. Fahrenheit zu Celsius\n");
        printf("0. Programm beenden\n");
        printf("Bitte wählen Sie eine Option: ");
        scanf("%d", &wahl);

        if (wahl == 1) {
            // Eingabe
            printf("Bitte geben Sie die Temperatur in Celsius ein: ");
            scanf("%f", &celsius);
            // Umrechnung
            fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
            // Ausgabe
            printf("%.2f Celsius sind %.2f Fahrenheit\n", celsius, fahrenheit);
        } else if (wahl == 2) {
            // Eingabe
            printf("Bitte geben Sie die Temperatur in Fahrenheit ein: ");
            scanf("%f", &fahrenheit);
            // Umrechnung
            celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
            // Ausgabe
            printf("%.2f Fahrenheit sind %.2f Celsius\n", fahrenheit, celsius);
        } else if (wahl != 0) {
            printf("Ungültige Auswahl. Bitte erneut versuchen.\n");
        }

    } while (wahl != 0);

    printf("Programm beendet.\n");
    return 0;
}