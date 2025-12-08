

/*
Autor: Mahdi 
Datum: 05.12.2025
Aufgabe: 6-14
Bescheibung: Lesen Sie zunächste Anzahl der einzugebenden Werte ein. 
Anschliessend soll aus den eingebeben Zahlen die grösste und die kleisten bestimmt werden. die eingegebenden Zahlen sollen im Bereich 0 - 1000 liegen.


*/


#include <stdio.h>

int main(){

    // Titel
    printf("Kleinste und grosste Zahl\n");
    printf("=============================\n\n");



    // Deklarationen
    int minimum, maximum;
    int anzahl, zahl ;

    // Eingabe der Anzahl der Werte
    printf("Geben Sie die Anzahl der einzugebenden Werte ein: ");
    scanf("%d", &anzahl);
    // Initialisierung von minimum und maximum
    minimum = 1000;
    maximum = 0;
    // Schleife zum Einlesen der Werte und Bestimmung von Minimum und Maximum
    
     
    while (anzahl > 0){

        printf("Bitte geben Sie die %d. Zahl ein:", anzahl);
        scanf("%d", &zahl);

        if (zahl < minimum) {
            minimum = zahl;
        }
        if (zahl > maximum) {
            maximum = zahl;
        }
        anzahl--; //
    }



    // Ausgabe der Ergebnisse
    printf("Die kleinste Zahl ist: %d\n", minimum);
    printf("Die groesste Zahl ist: %d\n", maximum);

    return 0;





}