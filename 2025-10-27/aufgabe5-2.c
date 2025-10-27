/*
Autor: mahdi
Datum: 27.10.2025   
Aufgabe 5-2:



*/

#include <stdio.h>
#include <math.h>

int main(void){




    // Deklaration der Variablen
    int alter;

    // Eingabeaufforderung
    printf("Bitte geben Sie Ihr Alter ein: ");
    scanf("%d", &alter);


    
    if (alter < 0) {
        printf("Fehler: Das Alter kann nicht negativ sein.\n");
    } else if (alter < 18) {
        printf("Sie sind minderjährig.\n");
    } else {
        printf("Sie sind volljährig.\n");
    }
    // Ende des Programms
    return 0;

}