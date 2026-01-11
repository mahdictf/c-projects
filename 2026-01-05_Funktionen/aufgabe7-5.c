
/*
Autor: Mahdi 
Datum: 05.01.2026
Beschreibung: Erstellen Sie ein Programm, welches 2 Zahlen einliest und die Summe der beiden Zahlen ausgibt.

*/



#include <stdio.h>


int titelAusgabe() {
    printf("=== Programm mit 4 Funktionenen===\n");
    return 0;
}


int eingabeZahlen(int *num1, int *num2) {
    printf("Geben Sie die erste Zahl ein: ");
    scanf("%d", num1);
    printf("Geben Sie die zweite Zahl ein: ");
    scanf("%d", num2);
    return 0;
}   

int berechneSumme(int num1, int num2) {
    return num1 + num2;
}
int ausgabeErgebnis(int summe) {
    printf("Die Summe der beiden Zahlen ist: %d\n", summe);
    return 0;
}

int main() {
    int zahl1, zahl2, summe;

    titelAusgabe();
    eingabeZahlen(&zahl1, &zahl2);
    summe = berechneSumme(zahl1, zahl2);
    ausgabeErgebnis(summe);

    return 0;
}

