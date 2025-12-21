


/*
Autor: Mahdi-R
Datum: 15.12.2025
Beschreibung: Erstellen Sie ein Programmmit einer funktion func_sinnlos, welche im Hauptprogramm 2 mal aufgerufen wird.

*/


#include <stdio.h>

void func_sinnlose(){
    printf("ich bin eine Sinnlose Funtkion\n");
}




int main(){

    printf("Funktion ohne Parameter, ohen Rückgabewert\n");
    printf("===========================================\n");

  


    printf("Vor dem 1. Aufruf von func_sinnlos.\n");
    printf("-------------------------------\n");
    func_sinnlose();
    printf("-----------------------------\n");
    printf("Nach dem 1. Aufruf von func_sinnlos.\n\n");


    printf("Vor dem 2. Aufruf von func_sinnlos.\n");
    printf("------------------------------------\n");
    func_sinnlose ();
    printf("------------------------------------\n");
    printf("Nach dem 2. Aufruff von func_sinnlos.\n");




    return 0;

}