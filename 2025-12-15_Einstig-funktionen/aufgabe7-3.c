

/*
Autor: Mahdi R
Datum: 15.12.2025
Beschreibung: Erstellen sie ein Programm, welches die Summe von zwei Zahlen (5 und 8) in einer funktion 
berechneEtwas berechnet und das Resutat an s Hauptprogramm zurückgibt.

*/


#include <stdio.h>

int berechneEtwas() {
    int z1 = 5;
    int z2 = 8;
    return z1 + z2;
}

int main() {
    int berechnetteZahl;

    berechnetteZahl = berechneEtwas();

    printf("Das Resultat ist: %d\n", berechnetteZahl);
    return 0;
}
