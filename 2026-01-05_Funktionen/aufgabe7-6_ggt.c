

/*
Autor: Mahdi
Datum: 10.01.2026
Ziele: Sie können eine Funktion mit übergabenparametern und Rückgabewert definieren und verwenden.
Beschreibung: Der Ggt (=Grösster gemeinsamer Teiler) aus zwei Zahlen a und b lässt sich nach dem folgenden Verfahren berechnen(euklidischer Algorithmus). h ist dabei eine lokale Hilfsvariable in der Funktion.


*/


#include <stdio.h>

void eingabeZahlen(int *num1, int *num2) {
    printf("Geben Sie die erste Zahl ein: ");
    scanf("%d", num1);
    printf("Geben Sie die zweite Zahl ein: ");
    scanf("%d", num2);
}

int berechneGGT(int a, int b) {
    int h;
    do {
        h = a % b;   // Rest der Division a durch b in h speichern
        a = b;       // b in a speichern
        b = h;       // h in b speichern
    } while (h != 0); // solange h ungleich 0 ist, wiederholen
    return a;        // ggt ist der letzte Wert von a
}

void ausgabeErgebnis(int ggt) {
    printf("Der groesste gemeinsame Teiler (ggt) ist: %d\n", ggt);
}

int main(void){

    // Titel 
    printf("==================Berechnung des ggt aus zwei Zahlen====================\n");


    int zahl1, zahl2, ggt;
    // Eingabe der Zahlen
    eingabeZahlen(&zahl1, &zahl2);  

    // Berechnung des ggt
    ggt = berechneGGT(zahl1, zahl2);
    // Ausgabe des Ergebnisses
    ausgabeErgebnis(ggt);





    

    /*
    int a, b, h, ggt;
    // E = Eingabe der Zahlen
    printf("Geben Sie die erste Zahl (a) ein: ");
    scanf("%d", &a);
    printf("Geben Sie die zweite Zahl (b) ein: ");
    scanf("%d", &b);
    // P = Verarbeitung (Berechnung des ggt)
    do {
        h = a % b;   // Rest der Division a durch b in h speichern
        a = b;       // b in a speichern
        b = h;       // h in b speichern
    } while (h != 0); // solange h ungleich 0 ist, wiederholen
    ggt = a;        // ggt ist der letzte Wert von a
    // A = Ausgabe des Ergebnisses
    printf("Der groesste gemeinsame Teiler (ggt) ist: %d\n", ggt);
      */
    return 0;

  





}



