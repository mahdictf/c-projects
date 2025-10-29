
/*
Autor: mahdi
Datum: 27.10.2025
Aufgabe 4-12:


*/


#include <stdio.h>
#include <math.h>

int main(void){

//deklaration der Variablen
double v0;
double alpha;
double flugweite;
const double pi = 3.1416;

//eingabeaufforderung
printf("Bitte geben Sie die Anfangsgeschwindigkeit (in m/s) ein: ");
scanf("%lf", &v0);

printf("Bitte geben Sie den Abwurfwinkel (in Grad) ein: ");
scanf("%lf", &alpha);



flugweite = (v0 * v0 * sin(2 * alpha * (pi / 180))) / 9.81;

//ausgabe der flugweite
printf("Die berechnete Flugweite beträgt: %.2f Meter\n", flugweite);
return 0;



    


}