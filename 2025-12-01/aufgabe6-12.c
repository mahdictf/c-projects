

/*
Autor: Mahdi-R
Datum: 06.12.2025
Aufgabe: 6-12
Beschreibung: EinKunde Legt einen Bestimmten Geldbetrag auf einem Konto an und bekommt einen bestimmten Zinsanteil dafür pro Jahr.
Erstellen Sie ein Programm, das abfragt, wie viel Geld der Kunde auf das Konto einzahlt und welchen Zinssatz er dafür bekommt.
Listen Sie mithilffe einer Schleife auf, wie sich das Geld jahr für vermehrt. Natürlcih fragen Sie den Anwender auch, wie viele Jahre dieser auflisten lassen will.

*/


#include <stdio.h>

int main(){
    // Titel
    printf("Zinseszins Rechnung\n");
    printf("=======================\n");

    // Deklartionen 
    float Einzahl_Geld, Zins;
    double Kontostand;
    int Anzahl_Jahr;
    int Jahr;
    int temp_Jahre;
    char weiter;
    

    // Verarbeitung
    do {
        // Eingabe
        printf("Wieviel Geld Zahlen Sie ein: ");
        scanf("%f", &Einzahl_Geld);
        printf("Wiegross ist der zinnsatz [Prozent]: ");
        scanf("%f", &Zins);
        printf("Wieviele Jahre legen Sie das Geld an: ");
        scanf("%d", &Anzahl_Jahr);

        // Berechnung
        temp_Jahre = Anzahl_Jahr;
        while (temp_Jahre > 0){
            Kontostand = Einzahl_Geld;
            Jahr = 1;
            while (Jahr <= temp_Jahre){
                Kontostand = Kontostand + (Kontostand * Zins / 100);
                Jahr++;
            }
            // Ausgabe
            printf("Nach %d Jahren haben Sie: %.2f CHF auf dem Konto\n", temp_Jahre, Kontostand);
            temp_Jahre--;
        }

        // Rückfrage machen
        printf("Möchten sie noch Zinseszins Rechnung machen (j/n): ");
        scanf(" %c", &weiter);

    } while ( weiter == 'j' || weiter == 'J'); 


  

    return 0;

}