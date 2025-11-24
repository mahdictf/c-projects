/*
Autor: mahdi
Datum: 24.11.2025
aufgabe 6-6: Erstellen sie ein Programm, welches Temeraturen von Celsius nach Fahrenheit umrechnet. Nach der Umrechnung soll der Benutzer die Mögichkeit haben ein Weitere Umrechnung vorzunehemen.
ziel: sie können eine fussgesteuerte Do.. while schleife anwenden.

*/

#include <stdio.h>

int main(){


    // Deklaration 
    float celsius, fahrenheit;
    char weiter;
    do {

        // titel
        printf("Celsius zu Fahrenheit Umrechnung\n");
        printf("=====================================\n");
        // Eingabe
        printf("Bitte geben Sie die Temperatur in Celsius ein: ");
        scanf("%f", &celsius);
        // Umrechnung
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        // Ausgabe
        printf("%.2f Celsius sind %.2f Fahrenheit\n", celsius, fahrenheit);
        // Weitere Umrechnung?
        printf("Möchten Sie eine weitere Umrechnung vornehmen? (j/n): ");
        scanf(" %c", &weiter);

    } while (weiter == 'j' || weiter == 'J');
    
    return 0;


}