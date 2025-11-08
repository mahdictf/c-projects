

/*
autor: mahdi
datum: 06.11.2025
Aufgabe 5-5:
beschreibung: Schreiben Sie ein Programm, welches ein Jahr darauf testet, ob es ein Schaltjahr ist oder nicht.

Hinweis:
    Ein Jahr ist ein Schaltjahr, wenn es durch 4 teilbar ist,
    aber nicht durch 100, ausser es ist auch durch 400 teilbar.
*/
#include <stdio.h>

int main(){



    //deklaration der variablen
    int jahr;

    //eingabe des jahres
    printf("Geben Sie ein Jahr ein: ");
    scanf("%d", &jahr);

    //test ob es ein schaltjahr ist
    if (jahr % 4 == 0 ){
        if (jahr % 100 == 0 ){
            if (jahr % 400 == 0 ){
                printf("Das Jahr %d ist ein Schaltjahr. \n", jahr);
            } else {
                printf("Das Jahr %d ist kein Schaltjahr. \n", jahr);
            }
        } else {
            printf("Das Jahr %d ist ein Schaltjahr. \n", jahr);
        }
    } else {
        printf("Das Jahr %d ist kein Schaltjahr. \n", jahr);
    }


}