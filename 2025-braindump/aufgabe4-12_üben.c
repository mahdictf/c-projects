

/*
autor: mahdi
datum: 09.11.2025
aufgabe 4-12 üben:
berechnung der flugweite eines projektils basierend auf anfangsgeschwindigkeit und abwurfwinkel

*/

#include <stdio.h>
#include <math.h>


int main(){

    //deklaration der Vaariablen

    double v0;
    double a;
    double flugweite;
    const double pi = 3.1416;
    const double g = 9.81;


    //eingabeaufforderung
    printf("Bitte Geben Sie die Anfangsgeschwindigkeit (in m/s) ein: ");
    scanf("%lf", &v0);
    printf("Bitte geben Sie den Abwurfwinkel (in Grad) ein: ");
    scanf("%lf", &a);

    //berechnung der flugweite
    flugweite = (v0 * v0  * sin(2 * a * (pi / 180))) / g;
    //ausgabe der flugweite

    printf("Die berechnete Flugweite beträgt: %.2f Meter\n", flugweite);
    return 0;



}
