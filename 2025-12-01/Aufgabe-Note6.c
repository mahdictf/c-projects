

/*
Autor : Mahdi
Datum: 01.12.2025
Aufgabe:Für ein Programm für die statistische Auswertung von Zeugnisnoten, soll sichergestellt werden, dass keine ungültigen Noten, d.h. Noten grösser 6 erfasst werden können.


*/


#include <stdio.h>

int main() {
    

    // Titel
    printf("Statistische Auswertung von Zeugnisnoten\n");
    printf("=========================================\n");

    // Deklaration
    float note;

    // Eingabe mit Validierung
    do {

        // Eingabe
        printf("Geben Sie eine Note ein (0-6): ");
        scanf("%f", &note);
        // Validierung der Note
        if (note < 0.0 || note > 6.0) {
            printf("Ungültige Note! Bitte geben Sie eine Note zwischen 0 und 6 ein.\n");
        }
    
    } while (note < 0.0 || note > 6.0);

    /*
    while (note < 0.0 || note > 6.0) {
        printf("Ungültige Note! Bitte geben Sie eine Note zwischen 0 und 6 ein: ");
        scanf("%f", &note);
    }

    // Ausgabe
    printf("Die eingegebene Note ist: %.2f\n", note);


    */

    return 0;
}