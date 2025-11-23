#include <stdio.h>
#include <math.h>

// Konstanten
const double PI = 3.1416;
const double DICHTE_COLA = 1.04;      // g/ml
const double DICHTE_ALU  = 2.7;       // g/cm^3

int main() {
    double hoehe, volumen;

    printf("Blubberlutsch AG\n\n");

    printf("Hoehe der Dose        [cm] : ");
    scanf("%lf", &hoehe);

    printf("Volumen der Dose      [ml] : ");
    scanf("%lf", &volumen);

    // Prüfen ob Höhe >= 10 cm
    if (hoehe < 10) {
        printf("\nDie Hoehe muss mindestens 10 cm sein!\n");
        printf("Bitte Programm neu starten.\n");
        return 0;
    }

    // Radius aus V = π r^2 h  → r = √(V / (πh))
    double radius = sqrt(volumen / (PI * hoehe));

    // Gewicht Cola
    double gewichtCola = volumen * DICHTE_COLA;

    // Dosenoberfläche: 2πr^2 + 2πrh
    double dosenflaeche = 2 * PI * radius * radius + 2 * PI * radius * hoehe;

    // Gewicht der Dose: 1/50 * Dosenfläche * Dichte Alu
    double gewichtDose = (1.0 / 50.0) * dosenflaeche * DICHTE_ALU;

    // Totalgewicht
    double totalgewicht = gewichtCola + gewichtDose;

    // Ergebnisse runden
    double totalgewicht_kg = totalgewicht / 1000.0;
    totalgewicht_kg = round(totalgewicht_kg * 100) / 100;        // zwei Nachkommastellen
    dosenflaeche = round(dosenflaeche * 100) / 100;              // zwei Nachkommastellen

    printf("\nResultate:\n");
    printf("Totalgewicht      [kg]: %.2f\n", totalgewicht_kg);
    printf("Oberflaeche     [cm^2]: %.2f\n", dosenflaeche);

    return 0;
}
