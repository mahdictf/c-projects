
/*
autor: mahdi
datum: 06.11.2025
Aufgabe 5-7:
Beschreibung: Schreiben Sie ein Programm, welches eine Schulnote in Worten ausdrückt:

*/

#include <stdio.h>

int main(){
    /* Deklaration der Variablen */

    float note;

    /* Eingabe der Note */
    printf("Geben Sie eine Schulnote ein (1-6): ");
    if (scanf("%f", &note) != 1) {
        printf("Ungültige Eingabe\n");
        return 1;
    }

    /* Gültigkeitsprüfung */
    if (note < 1.0f || note > 6.0f) {
        printf("Ungültige Note: %.1f\n", note);
        return 0;
    }

    /* Runde (positive Werte): 5.1 -> 5, 4.6 -> 5 usw. 
    
    (int) entfernt die Nachkommastellen.
    (int)(x + 0.5f) rundet eine positive Zahl auf den nächsten Integer.
    */
    int n = (int)(note + 0.5f);

    /* Ausgabe mit if / else if Kette */
    if (n == 6) {
        printf("%.1f bedeutet 'Sehr gut'\n", note);
    } else if (n == 5) {
        printf("%.1f bedeutet 'Gut'\n", note);
    } else if (n == 4) {
        printf("%.1f bedeutet 'Genügend'\n", note);
    } else if (n == 3) {
        printf("%.1f bedeutet 'Ungenügend'\n", note);
    } else if (n == 2) {
        printf("%.1f bedeutet 'Schlecht'\n", note);
    } else if (n == 1) {
        printf("%.1f bedeutet 'Sehr schlecht'\n", note);
    } else {
        /* sollte wegen Bereichsprüfung nicht erreicht werden */
        printf("Ungültige Note: %.1f\n", note);
    }

    return 0;






    /*
    //deklaration der Variablen
    float note;

    //eingabe der note
    printf("Geben Sie eine Schulnote ein (1-6): ");
    scanf("%f", &note);

    //ausgabe der note in worten
    if (note == 6){
        printf(" %.2f bedeutet 'Sehr gut' \n", note);
    } else if (note == 5){
        printf(" %.2f bedeutet 'Gut' \n", note);
    } else if (note == 4){
        printf(" %.2f bedeutet 'Genügend' \n", note);
    } else if (note == 3){
        printf(" %.2f bedeutet 'Ungenügend' \n", note);
    } else if (note == 2){
        printf(" %.2f bedeutet 'schlecht' \n", note);
    } else if (note == 1){
        printf(" %.2f bedeutet 'Sehr schlecht' \n", note);
    } else {
        printf("Ungültige Note \n");
    }
    return 0;

    */
}