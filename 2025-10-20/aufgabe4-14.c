

/*
autor: mahdi
datum: 06.11.2025
Aufgabe 4.13
Beschreibung: Lesen Sie eine Zahl mit Nachkommastellen ein und die gewünschte Rundung. Runden Sie die eingelesende Zahl auf die Anzahl der angegebenen Nachkommastellen
.
*/


#include <stdio.h>
#include <math.h>

int main(){

    //deklaration der variablen
    double zahl;
    int nachkommastellen;

    //eingabe der Zahl 
    printf("Geben Sie eine Zahl mit Nachkommastellen ein: ");
    scanf("%lf", &zahl);

    //eingabe der Nachkommastellen
    printf("Geben Sie die Anzahl der Nachkommastellen ein: ");
    scanf("%d", &nachkommastellen);
    //verarbeitung des Faktors zum Runden
    double faktor = pow(10, nachkommastellen);
    zahl = round(zahl * faktor) / faktor;

    //ausgabe des Ergebnisses
    printf("Kommazahl gerundet auf %d Nachkommastellen: %lf\n", nachkommastellen , zahl);
    return 0;

    


}