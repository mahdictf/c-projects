

/*
Autor: Mahdi R
Datum: 07.12.2025
Ziele: 

*/

#include <stdio.h>
int main(){

    // Titel 
    printf("===============Party=============\n\n");

    // Deklarationen

    int anzahlGaeste;
    int summe;
    char weiter;

     

    do
    {
        // Einagbe
    printf("Geben Sie die Anzahl der Gäste ein: ");
    scanf("%d", &anzahlGaeste);
        
    // initialisieren
    summe = 0;

      // Verarbeitung

    while (anzahlGaeste > 0){

        summe = summe + anzahlGaeste;
        anzahlGaeste--;
         // Ausgabe
    printf("Anzahl der Klirrgeräusche: %d\n", summe);
    }


    // Rückfrage 
   printf("Möchten Sie weitermachen?");
   scanf ("%c", &weiter);

       
    } while (weiter == 'J' || weiter == 'j');


    return 0;



    

}