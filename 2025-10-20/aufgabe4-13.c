/*
autor: mahdi
datum: 06.11.2025
Aufgabe 4.13
beschreibung: Schreiben Sie ein C-programm,, welches in einem rechtwinkligen dreieck aus den beiden katheten a und b die hypotensuse c berechnt:


*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;

    printf("Geben Sie die Laenge der Kathete a ein: ");
    scanf("%f", &a);
    printf("Geben Sie die Laenge der Kathete b ein: ");
    scanf("%f", &b);

    c = sqrt(pow(a, 2) + pow(b, 2));
    printf("Die Laenge der Hypotenuse c ist: %.2f\n", c);

    return 0;

}
