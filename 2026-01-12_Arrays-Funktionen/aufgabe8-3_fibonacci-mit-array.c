


/*
Autor: Mahdi 
Datum: 18.01.2026
Ziel: Sei können mit Arrays und Funktionen umgehen
Bescheibung: Die Sogenanante Fibonacci-Folge sieht Folgendermasssen aus:
01123456781321 ... (die nächste Zahl würde 13 + 21 = 34 lauten)
dh. die nächste Zahl in der Folge berechnet sich immer aus der Summe der beiden vorhergehenden Zahlen.
Die beiden Anfangszahlen sind 0 und 1. die se Folge ist für viele Wachstumsprozesse in der Natur von Bedeutung.


*/



#include <stdio.h>

void fibonacci_berechneen (int arr[], int size)

{

    arr [0] = 0;
    arr [1] = 1;

    for (int i = 2; i < size; i++)
    {

        arr[i] = arr[ i - 1] + arr[i - 2];


    }



}

// Fibonacci ohne Funktionenen und mit Funktionen 
int main (){


    int fibonacci[30];

    fibonacci_berechneen(fibonacci, 30);

    for (int i = 0; i < 30; i++)
    {
        printf("fibonacci[%d\n] = %d\n", i, fibonacci[i]);

    }




    /*
    int fibonacci[30];

    fibonacci [0] = 0;
    fibonacci[1] = 1;


    for (int i = 2; i < 30; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

    }

    for (int i = 0; i < 30; i++)
    {


        printf("fibonacci[%d\n] = %d\n", i, fibonacci[i]);

    }

    */


    return 0;









}






