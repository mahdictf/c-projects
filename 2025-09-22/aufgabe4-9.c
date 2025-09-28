#include <stdio.h>

int main() {
    // D = Deklaration
    float radius; 
    float umfang, flaeche;
    float pi = 3.1415;

    // E = Eingabe
    printf("Berechnung des Umfangs und der Flaeche eines Kreises aus dem Radius\n");
    printf("Bitte geben Sie den Radius ein [Meter]: ");
    scanf("%f", &radius);

    // V = Verarbeitung
    umfang = 2 * pi * radius;       // Kreisumfang
    flaeche = pi * radius * radius; // Kreisfläche

    // A = Ausgabe
    printf("Der Kreisumfang betraegt %.2f Meter\n", umfang);
    printf("Die Kreisflaeche betraegt %.2f Quadratmeter\n", flaeche);

    return 0;
}
