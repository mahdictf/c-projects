
/*
Autor: mahdi
Datum: 27.10.2025
Aufgabe 5-1:

*/

#include <stdio.h>
#include <math.h>

int main(void){

    // Deklaration der Variablen
    
    float inputZahl;


    // Eingabeaufforderung 

    printf("Bitte eine Zahl eingeben: ");
    scanf("%f", &inputZahl);


// Überprüfung, ob die Zahl negativ ist
    if (inputZahl < 0) {
        printf("Fehler: Die eingegebene Zahl ist negativ. Die Wurzel einer negativen Zahl ist nicht definiert.\n");
    } else {

        printf("Die Wurzel aus %f ist %f\n", inputZahl, sqrt(inputZahl));

    }

    return 0;




}