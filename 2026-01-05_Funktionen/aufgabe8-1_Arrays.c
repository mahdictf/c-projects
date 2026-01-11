


/*
Autor: mahdi
Datum: 05.01.2026
Aufgabe: 8-1 Arrays
Beschreibung:  


*/


#include <stdio.h>

int main(void){


    // Deklarationen

    int zahlen[] = {33, 12, 75, 85, 62, 14, 100, 29};

    // Elemente ermitteln 
    int anzahl  = sizeof (zahlen) / sizeof (int);


    // Einzeln ausgeben
    printf("%d\n", zahlen[0]);         // erstes Element
    printf("%d\n", zahlen[1]);         // zweites Element
    printf("%d\n", zahlen[2]);
    printf("%d\n", zahlen[3]);
    printf("%d\n", zahlen[4]);
    printf("%d\n", zahlen[5]);
    printf("%d\n", zahlen[6]);
    printf("%d\n", zahlen[7]);




    // a) alle werte mit Schleife ausgeben
    for (int i = 0; i < anzahl; i++){
        printf("%d\n", zahlen [i]);
    }


    // b; Rückwärts ausgaben
    
    for (int i = anzahl - 1; i >= 0; i--){

        printf("%d\n", zahlen[i]);
    }


      /* c) Bestimmte Indizes */
    printf("\nBestimmte Indizes:\n");
    printf("zahlen[0] = %d\n", zahlen[0]);
    printf("zahlen[3] = %d\n", zahlen[3]);
    printf("zahlen[7] = %d\n", zahlen[7]);

    printf("zahlen[-1] und zahlen[8] sind UNGUELTIG (undefiniertes Verhalten)\n");


  /* d) Groesste Zahl */
    int max = zahlen[0];
    for (int i = 1; i < anzahl; i++) {
        if (zahlen[i] > max) {
            max = zahlen[i];
        }
    }
    printf("\nGroesste Zahl: %d\n", max);


     /* e) Kleinste Zahl */
    int min = zahlen[0];
    for (int i = 1; i < anzahl; i++) {
        if (zahlen[i] < min) {
            min = zahlen[i];
        }
    }
    printf("Kleinste Zahl: %d\n", min);


  /* f) Summe */
    int summe = 0;
    for (int i = 0; i < anzahl; i++) {
        summe += zahlen[i];
    }
    printf("Summe: %d\n", summe);


    /* g) Durchschnitt */
    float durchschnitt = (float)summe / anzahl;
    printf("Durchschnitt: %.2f\n", durchschnitt);






    return 0;
}