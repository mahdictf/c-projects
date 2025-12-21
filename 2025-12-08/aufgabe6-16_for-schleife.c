

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
            printf("Ten\n");
            sleep(1); // Pause von 1 Sekunde
            break;

        
        case 9:
            printf("Nine\n");
            sleep(1); // Pause von 1 Sekunde

            break;

        case 8:
            printf("Eight\n");
            sleep(1); // Pause von 1 Sekunde
            break;

        case 7:
            printf("Seven\n");  
            sleep(1); // Pause von 1 Sekunde
            break;
        case 6:
            printf("Six\n");
            sleep(1); // Pause von 1 Sekunde    
            break;
        case 5:
            printf("Five\n");
            sleep(1); // Pause von 1 Sekunde
            break;
        case 4:
            printf("Four\n");
            sleep(1); // Pause von 1 Sekunde
            break;
        case 3:
            printf("Three\n");
            sleep(1); // Pause von 1 Sekunde
            break;
        case 2:
            printf("Two\n");
            sleep(1); // Pause von 1 Sekunde
            break;  
        case 1:
            printf("One\n");    
            sleep(1); // Pause von 1 Sekunde    
            break;
        case 0:
            printf("Lift Off\n");  
            sleep(1); // Pause von 1 Sekunde         
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