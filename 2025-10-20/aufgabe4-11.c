

#include <stdio.h>
#include <math.h>

/*
Aufgabe 4-11:
Datûm: 20.10.2025
Erstellt von: [Mahdi ]

 */

int main (void){

    int ersteZahl;
    int zweiteZahl;


    printf("Potenzberechung\n");
    printf("===============\n\n");
    printf("bitte geben Sie die Basis ein: ");
    scanf("%d", &ersteZahl);
    printf("bitte geben Sie den Exponenten ein: ");
    scanf("%d", &zweiteZahl);

    double ergebnis = pow(ersteZahl, zweiteZahl);
    /* Ergebnis auf ganze Zahl runden und als Integer ausgeben, damit keine ".00" mehr erscheint */
    long long ganz = llround(ergebnis);
    printf("%d hoch %d ist %lld\n", ersteZahl, zweiteZahl, ganz);


    return 0;
}
