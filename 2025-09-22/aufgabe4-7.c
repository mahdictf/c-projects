#include <stdio.h>

int main() {
    int ersteZahl;
    int zweiteZahl;
    int summe, differenz, produkt, ganzzahldivision, rest;
    float f1, f2, fdivision;

    // Eingabe
    printf("Bitte geben Sie die erste Zahl ein: ");
    scanf("%d", &ersteZahl);

    printf("Bitte geben Sie die zweite Zahl ein: ");
    scanf("%d", &zweiteZahl);

    // Berechnungen
    summe = ersteZahl + zweiteZahl;
    differenz = ersteZahl - zweiteZahl;
    produkt = ersteZahl * zweiteZahl;
    ganzzahldivision = ersteZahl / zweiteZahl;
    rest = ersteZahl % zweiteZahl;

    // Für die Fließkommadivision
    f1 = ersteZahl;
    f2 = zweiteZahl;
    fdivision = f1 / f2;

    // Ausgaben
    printf("\n--- Ergebnisse ---\n");
    printf("Die Summe der Zahlen %d und %d ist: %d\n", ersteZahl, zweiteZahl, summe);
    printf("Die Differenz der Zahlen %d und %d ist: %d\n", ersteZahl, zweiteZahl, differenz);
    printf("Das Produkt der Zahlen %d und %d ist: %d\n", ersteZahl, zweiteZahl, produkt);
    printf("Die Division der Zahlen %d und %d ist: %d Rest %d\n", ersteZahl, zweiteZahl, ganzzahldivision, rest);
    printf("Die Fließkommadivision der Zahlen %d und %d ist: %.3f\n", ersteZahl, zweiteZahl, fdivision);

    return 0;
}
