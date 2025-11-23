/*
Autor: mahdi rahimi
Datum: 23.11.2025
Aufgabe 5-4: Erstellen Sie die untenstehende Tabelle, welche temperaturen von  -20 bis  50 in celsius und in Fahrenheit in 5 Grad-Schritten gegenüberstellt.






*/


#include <stdio.h>
#include <math.h>


int main(){

    // Deklaration
    int celsius;
    double fahrenheit;
    printf("Celsius zu Fahrenheit Tabelle\n");
    printf("=====================================\n");
    

    // Initialisierung
    celsius = -20;
    while (celsius <= 50) {

        // Umrechnung
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

        // Ausgabe
        printf("%d Celsius\t%.2lf Fahrenheit\n", celsius, fahrenheit);

        // Re-Initialisierung
        celsius = celsius + 5;
    }
    return 0;






}