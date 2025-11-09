
/*
autor: Mahdi R.
datum: 09.11.2025
Aufgabe 5-7 üben:


*/

#include <stdio.h>

int main(){

    //deklaration der variablen
    int note;
    //eingabe der note
    printf("Gib deine Note ein (1-6): ");
    scanf("%d", &note);

    //ausgabe der note in worten
    if (note > 6 || note < 1){
        printf("Ungültige Note!\n");
    } else if (note == 6){
        printf("Sehr gut\n");
    } else if (note == 5){
        printf("Gut\n");
    } else if (note == 4){
        printf("Genügend\n");
    } else if (note == 3){
        printf("Ungenügend\n");
    } else if (note == 2){
        printf("Schlecht\n");
    } else if (note == 1){
        printf("Sehr schlecht\n");
    }
    return 0;


}