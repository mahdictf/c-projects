/*
Autor: mahdi
Datum: 27.10.2025   
Aufgabe 5-2:
Beschreibung: Schreiben Sie ein Programm, welches Ihr Alter im Hinblick auf das Autofahren überprüft.



*/

#include <stdio.h>
#include <math.h>

int main(void){




    // Deklaration der Variablen
    int alter;
    int Differenz;

    // Eingabeaufforderung
    printf("Bitte geben Sie Ihr Alter ein: ");
    scanf("%d", &alter);
    Differenz = 18 - alter;
     //Verarbeitung der Eingabe
     if (alter < 18){
        printf("Sie müssen noch %d Jahre warten, um Auto zu fahren.\n", Differenz );
     } else if (alter > 18){

        printf("Sie sind seit %d Jahren alt genug, um Auto zu fahren.\n", Differenz * -1);
     } else if (alter == 18){
        printf("Herzlichen Glückwunsch zum Erreichen des Mindestalters zum Autofahren!\n");
     } else if (alter != 18){
        printf("Dieses Jahr sind Sie nicht 18 Jahre alt.\n");
     }
}