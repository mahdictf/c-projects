
/*
Autor: mahdi
datum: 01.11.2025
Aufgabe: verschachtelung 1-0


*/

#include <stdio.h>


int main(void){

    // D = Deklaration der Variablen
    double note;
    // E = Eingabeaufforderung
    printf("Bitte geben Sie Ihre Note ein (0.0 - 6.0): ");
    scanf("%lf", &note);

    // B = Bewertung der Note
    if (note >= 0.0 && note <= 6.0) {
        if (note < 4.0) {
            printf("Sie haben nicht bestanden.\n");
        } else {
            printf("Sie haben bestanden.\n");
        }
    } else {
        printf("Ungültige Note. Bitte geben Sie eine Note zwischen 0.0 und 6.0 ein.\n");
        
    }

    return 0;
}

