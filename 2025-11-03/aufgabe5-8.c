

/*
Autor: mahdi
Datum: 06.11.2025
Aufgabe 5-8:
Beschreibung: schreiben Sie ein Programm, welches ein jahr darauf testet, ob es ein Schaltjahr ist oder nicht:
 Hinweis:
    Ein Jahr ist ein Schaltjahr, wenn es durch 4 teilbar ist,
    aber nicht durch 100, ausser es ist auch durch 400 teilbar.


Anforderungen:
    - Umgekehrte Bedingungen verwedenden (nicht durch 4 teilbar,...)
    - if... mit else if... else if... kombinieren
    - DEVA Prinzip einhalten


*/


#include <stdio.h>
int main(){


    //deklaration der variablen

    int jahr;
    int istSchaltjahr;
    //eingabe des jahres
    printf("Geben Sie ein Jahr ein: ");
    scanf("%d", &jahr);


    //verarbeitung ob es ein schaltjahr ist
    if (jahr % 4 != 0 ){
        istSchaltjahr = 0;
    } else if (jahr % 100 != 0 ){
        istSchaltjahr = 1;
    } else if (jahr % 400 != 0 ){
        istSchaltjahr = 0;
    } else {
        istSchaltjahr = 1;
    }

    //ausgabe des ergebnisses
    if (istSchaltjahr == 1 ){
        printf("%d ist ein Schaltjahr.\n", jahr);
    } else {
        printf("%d ist kein Schaltjahr.\n", jahr);
    }

    return 0;

}


