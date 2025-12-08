/*
Autor: mahdi
Datum: 06.12.2025
Aufgabe6-13
Beschreibung: Schreiben Sie ein Programm, welches die einfache Quersumme einer Beliebigen Ganzzahl berechnet.


*/
/*
Quersumme berechnen – Schritt für Schritt

1. Zahl % 10 → gibt die **letzte Ziffer** der Zahl.
   Beispiel: 8678 % 10 = 8

2. Quersumme = Quersumme + (letzte Ziffer)
   Beispiel: Quersumme = 0 + 8 = 8

3. Zahl / 10 → entfernt die **letzte Ziffer**.
   Beispiel: 8678 / 10 = 867

4. Wiederhole Schritte 1–3, bis Zahl = 0.

Beispiel: Zahl = 8678
- 8678 % 10 = 8 → Quersumme = 8 → Zahl = 867
- 867 % 10 = 7 → Quersumme = 15 → Zahl = 86
- 86 % 10 = 6 → Quersumme = 21 → Zahl = 8
- 8 % 10 = 8 → Quersumme = 29 → Zahl = 0

Fertig! Quersumme = 29
*/


#include <stdio.h>

int main(){

    // Titel
    printf("Quersumme berechnen\n");
    printf("=====================\n\n");

    // Deklarationen
    int Zahl;
    int Quersumme = 0;
    int Ziffer;

    // Eingabe
    printf("Bitte geben Sie eine Positive Zahl ein:");
    scanf("%d", &Zahl);

    // Verarbeitung
    while (Zahl > 0){
        Ziffer = Zahl % 10; // Letzte Ziffer extrahieren
        Quersumme = Quersumme + Ziffer; // Ziffer zur Quersumme hinzufügen
        Zahl = Zahl / 10; // Letzte Ziffer entfernen
    }

    // Ausgabe
    printf("Die Quersumme aus %d ist: %d\n", Zahl, Quersumme);
    return 0;


}