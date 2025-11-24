/*
Autor: Mahdi 
Datum: 24.11.2025
Aufgabe 6-5: Sie haben als Abteilunsleiter einer jMilchabfüllifirm den Auftrag erhalten, eine neuartige Verpackung fpr 100 Milliter Mich zu entwickeln. die neu verpakcung sool die form einers kegels erhalten


Ziel: Sie können eine Korrekte while-Schleife erstellen.


*/

#include <stdio.h>
#include <math.h>


int main(){

    // Titel
    printf (" Entwicklung einer Kegelformigen Milchverpackung \n");
    printf ("=================================================\n");


    // Deklaration


    const float Durchmesser = 10.0; // Anfangsdurchmesser in cm
    const float PI = 3.1416;
    float hoehe;
    float volumen;
    
    // Eingabe
    hoehe = 30.0;

    while (hoehe >= 40.0) {
        // Verarbeitung
    volumen = (1.0/3.0) * PI * pow(Durchmesser / 2.0, 2);
    hoehe =+ 0.5;
     // Ausgabe
    printf ("Hoehe %f cm \t = %.2f ml\n", hoehe, volumen);
    }


    


   

    return 0;





}