

/*
Autor : Mahdi
Datum: 01.12.2025
Aufgabe 6-8: erstellen Siei ein Programm, das abfragt,
wie viele Gleitpunktzahlen addiert werden sollen. lesen Sie dann 
in einer Schleife die einzelnen Gleitpunktypen (float-werte) ein,
und addieren Sie diese. Am Ende geben Sie das Ergbnis der Addtion aus.


*/


#include <stdio.h>


int main(){

    // Titel
    printf("Summieren in einer Schleife\n");
    printf("==============================\n");

    // Deklaration 

    int Zahlen;
    float zahl, Summe; 

    // Eingabe lesen

    printf("Bitte geben Sie ein, wieviel Zahlen Sie addieren möchten: ");
    scanf("%d", &Zahlen);

    // Schleife zum Einlesen und Addieren der Zahlen

    Summe = 0.0;

    while (Zahlen > 0){
        printf("Geben Sie eine Gleitpunktzahl ein: ");
        scanf("%f", &zahl);
        Summe = Summe + zahl;
        Zahlen--; // Dekrementieren der Anzahl der verbleibenden Zahlen
    }
    // Ausgabe des Ergebnisses
    printf("Die Summe der eingegebenen Zahlen ist: %.2f\n", Summe);
    return 0;

}