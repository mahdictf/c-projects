
/*
Autor : Mahdi
Datum: 03.12.2025
Aufgabe 6-7: 
Bescheibung: Erstellen Sie einen Temperaturumrechner von Celsius -> Fahrenheit bei dem der Benutzer die Art der Umrechnung wählen oder das Programm beenden kann.



*/


#include <stdio.h>

int main(){
    // Titel
    printf("==============Menu============\n");


    // deklaration
    int wahl;
    float celsius, fahrenheit;

    do {

        // Menu
        printf("1, Celsius -> Fahrenheit ....\n");
        printf("2, Fahrenheit -> Celsius\n");
        printf("3, Ende\n");


        // Eingabe und Verarbeitung
        switch (wahl)
        {
        case  1:

            printf("Geben Sie die Temperatur in Celsius ein: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("Die Temperatur in Fahrenheit ist: %.2f\n", fahrenheit);
            
            break;

        case 2:

            printf("Geben Sie die Temperatur in Fahrenheit ein: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32) * 5 / 9;
            printf("Die Temperatur in Celsius ist: %.2f\n", celsius);

        break;
         

        case 3:
            printf("Programm wird beendet.\n");
            break;

        default:
            break;
        }
        
        // Eingabe einlesen 
        printf("Bitte wählen Sie eine Option: ");
        scanf("%d", &wahl);

        // die bedingung prüfen
    } while (wahl != 3);


    return 0;
    








}