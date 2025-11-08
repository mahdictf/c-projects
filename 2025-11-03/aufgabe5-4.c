/*
autor: Mahdi Rahimi
datum: 03.11.2025
Aufgabe 5-4: Erstellen Sie ein Programm, welches zwei franken und Rappen Beträge vergleicht.

*/


#include <stdio.h>


int main(){

    //Deklaration der Variablen
    
    int franken1, rappen1;
    int franken2, rappen2;
    //Eingabe der Beträge
    printf("Geben Sie den ersten Betrag ein(Franken): ");
    scanf("%d", &franken1);
    printf("Geben Sie den Rappen ein: ");
    scanf("%d", &rappen1);


    printf("Geben Sie den zweiten Betrag ein (Franken): ");
    scanf("%d", &franken2);
    printf("Geben Sie den Rappen ein: ");
    scanf("%d", &rappen2);

    //vergleich der Beträge
    if (franken1 < franken2){
        printf("Der erste Betrag %d franken und %d rappen ist kleiner als %d franken und %d rappen. \n ", franken1, rappen1, franken2, rappen2  );
    } else if (franken1 > franken2){
        printf("Der erste Betrag %d franken und %d rappen ist grösser als %d franken und %d rappen. \n ", franken1, rappen1, franken2, rappen2  );
    } else {
        if (rappen1 < rappen2) {
            printf("Der erste Betrag %d franken und %d rappen ist kleiner als %d franken und %d rappen. \n ", franken1, rappen1, franken2, rappen2  );
        } else if (rappen1 > rappen2) {
            printf("Der erste Betrag %d franken und %d rappen ist grösser als %d franken und %d rappen. \n ", franken1, rappen1, franken2, rappen2  );
        } else {
            printf("Die beiden Beträge sind gleich. \n ");
        }
    }

    return 0;


}