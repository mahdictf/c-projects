/*
autor: Mahdi Rahimi
datum: 03.11.2025
aufgabe 5-5: Schreiben Sie ein Programm, wwelches von drei eingegebenen Zahlen immer die grösste zurückgibt.


*/


#include <stdio.h>

int main(void){

    //deklaration der variablen
    double zahl1, zahl2, zahl3;

    /*
    double groesste;
    */

    //eingabeaufforderung
    printf("Bitte geben Sie die erste Zahl ein: ");
    scanf("%lf", &zahl1);

    printf("Bitte geben Sie die zweite Zahl ein: ");
    scanf("%lf", &zahl2);

    printf("Bitte geben Sie die dritte Zahl ein: ");
    scanf("%lf", &zahl3);



    // Verarbeitung und Ausgabe

    if (zahl1 > zahl2 ){
        if (zahl1 > zahl3){
            printf("Die grösste Zahl ist: %.2f\n", zahl1);
        } else {
            printf("Die grösste Zahl ist: %.2f\n", zahl3);
        }
    } else {
        if (zahl2 > zahl3){
            printf("Die grösste Zahl ist: %.2f\n", zahl2);
        } else {
            printf("Die grösste Zahl ist: %.2f\n", zahl3);
        }
    }


    //------------------------------------------------------------


    /*

    //bestimmung und ausgabe der grössten zahl
    if (zahl1 >= zahl2 && zahl1 >= zahl3) {
        printf("Die grösste Zahl ist: %.2f\n", zahl1);
    } else if (zahl2 >= zahl1 && zahl2 >= zahl3) {
        printf("Die grösste Zahl ist: %.2f\n", zahl2);
    } else {
        printf("Die grösste Zahl ist: %.2f\n", zahl3);
    }
    */

    //------------------------------------------------------------

    /*
    //bestimmung der grössten zahl
    groesste = zahl1;

    if (zahl2 > groesste) {
        groesste = zahl2;
    }
    if (zahl3 > groesste) {
        groesste = zahl3;
    }

    //ausgabe der grössten zahl
    printf("Die grösste Zahl ist: %.2f\n", groesste);
    */

    return 0;





}


