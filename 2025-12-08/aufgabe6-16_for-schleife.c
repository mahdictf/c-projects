

/*
autor: Mahdi R
datum: 08.12.2025
aufgabe: 6-16
Beschreibung: Programmieren Sie einen animierten Countdown von 10 bis 0 mit einer for-Schleife.
dannach soll der jeweilige zahl-text ausgegeben werden.
*/

#include <stdio.h>
#include <unistd.h> // Für sleep-Funktion
int main(){
    // Titel
    printf("Animierter Countdown\n");
    printf("=========================\n");

    // Countdown von 10 bis 0 mit for-Schleife
    for (int i = 10; i >= 0; i--){

        switch (i)
         
        {
        case 10:
            printf("Zehn\n");
            break;

        
        case 9:
         

            break;
        
        default:
            break;
        }

        /*
        printf("%d\n", i);
        sleep(1); // Pause von 1 Sekunde
        */
    }


    printf("Countdown beendet!\n");
    return 0;
}
