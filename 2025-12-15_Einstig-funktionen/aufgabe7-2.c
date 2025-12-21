

/*
Autor: Mahdi R
Datum: 15.12.2025
Beschreibung:Erstellen Sie ein programm, welche die funtkon resultatAnzeigen für 2 Rechnungen (5 + 8 und 3 + 4) 2 mal aufruft.


*/


#include <stdio.h>



void resultatAnzeigen2( int res){

    printf("Das Resultat der ersten Rechnung ist: %d\n", res);
    printf("-----------------------\n");
}

int main (){

    int a = 5;
    int b = 8;
    int c = 3;
    int d = 4;
    int summe1;
    int summe2;
    summe1 = 5 + 8;
    summe2 = 3 + 4;



    printf (" Funktion mit Parameter, ohne Rückgabewert\n");
    printf("==========================================\n");
    
      
    resultatAnzeigen2 (summe1);
    resultatAnzeigen2 (summe2);
    return 0;

}