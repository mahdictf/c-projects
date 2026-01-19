

/*
Autor: Mahdi
Datum: 12.01.2026
Ziel: Sie können mit Arrays umgehen
Beschreibung:  
Aufgabenstellung

Sie ein Programm in C, nach dem folgenden Schema:
1. Begrüssungsmeldung
2.Anzahl Messpunkte N anfordern
3.N einlesen
4.Die N Messwerte einer nach dem andern anfordern und in einem Array speichern.
5.Das Array scannen, dabei 
o
bisherige höchst
-Temperatur ermitteln
o
bisherige tiefst-Temperatur ermitteln
o
Summe alle Temperaturwerte bilden
6.Durchschnitt = Summe/N
7.
Höchste, tiefste und durchschnittliche Temperatur ausgeben.
4
.


*/



#include <stdio.h>


 


int main() {

    // Deklarationen
    int N;
    printf("Willkommen zum Wetterdaten-Programm!\n");
    printf("Bitte geben Sie die Anzahl der Messpunkte ein: ");
    scanf("%d", &N);


    // Array für die Temperaturen deklarieren
    float temperaturen[N]; // Array zur Speicherung der Temperaturen
    for (int i = 0; i < N; i++) {
        printf("Geben Sie die Temperatur für Messpunkt %d ein: ", i + 1);
        scanf("%f", &temperaturen[i]);
    }
    // Initialisierung der Variablen für höchste, tiefste und Summe
    float hoechste = temperaturen[0];
    float tiefste = temperaturen[0];
    float summe = 0.0;

    for (int i = 0; i < N; i++) {
        if (temperaturen[i] > hoechste) {
            hoechste = temperaturen[i];
        }
        if (temperaturen[i] < tiefste) {
            tiefste = temperaturen[i];
        }
        summe += temperaturen[i];
    }

    float durchschnitt = summe / N;

    printf("Höchste Temperatur: %.2f\n", hoechste);
    printf("Tiefste Temperatur: %.2f\n", tiefste);
    printf("Durchschnittliche Temperatur: %.2f\n", durchschnitt);

    

    return 0;
}




