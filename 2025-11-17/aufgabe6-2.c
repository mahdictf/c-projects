
/*
Autor: M. Rahimi
Datum: 17.11.2025
Beschreibung: Erstellen Sie ein Programm, welches nach Eingabe einer Zahl die entsprechende Dezimalreihe auflistet.

*/


#include <stdio.h>

int main(){

    //1. Deklaration
    int zahl, i;

    printf("Dezimalreihe Berechnung\n");
    printf("=====================================\n");

    // Eingabe der Zahl
    printf("Bitte geben Sie eine Zahl ein: ");

    //2. Initialisierung & Eingabe
    scanf("%d", &zahl);
    printf("Die Dezimalreihe bis %d ist:\n", zahl);
    printf("=====================================\n");
    //3. bedingung mit der Schleifenvariable
    i = 1;
    while (i <= zahl) {
    
        printf("%d\n", i);
       

        //4. Re-initialisierung der Schleifenvariable
        i = i + 1; 
    
    }

    return 0;









}