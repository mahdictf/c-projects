
/*
Autor: M. Rahimi
Datum: 17.11.2025
beschreibung: Schreiben Sie ein Programm, welches eine Zahl von der Tastatur eiinlist und die Wurtzel daraus berechnet.
Die Berechnung soll allerdings nur dan stattfinden, wenn die zahl grösser gleich 0 war, ansonsten soll die zahl nach einer Fehlermeldung erneut eingegeben werden können.


*/

#include <stdio.h>
#include <math.h>

int main(){

    // Deklaration 
    double zahl, wurzel;
    // Eingabe

    while (1) {
        printf("Wurtzelberechnung\n");
        printf("=====================================\n");
    
        printf("Bitte geben Sie eine Zahl ein (>= 0): ");
        scanf("%lf", &zahl);

        // Überprüfung der Eingabe
        if (zahl >= 0) {
            break; // Gültige Eingabe, Schleife verlassen
        } else {
            printf("Fehler: %.2lf ist negativ. Bitte erneut eingeben.\n", zahl);
        }
    }

    // Berechnung der Wurzel
    wurzel = sqrt(zahl);
    printf("Die Wurzel von %.2lf ist %.2lf\n", zahl, wurzel);

    return 0;


}
