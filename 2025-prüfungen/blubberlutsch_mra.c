#include <stdio.h>
#include <math.h>  // für sqrt()

#define PI 3.1416
#define DICHTE_COLA 1.04
#define DICHTE_ALU  2.7

int main()
{
    double h, V;          // Höhe und Volumen
    double r, A;          // Radius und Oberfläche
    double gCola, gDose;  // Gewichte
    double gTotal;        // Totalgewicht

    printf("Blubberlutsch AG\n");
    printf("Hoehe der Dose [cm]: ");
    scanf("%lf", &h);

    printf("Volumen der Dose [ml]: ");
    scanf("%lf", &V);

    if (h < 10)
    {
        printf("\nDie Hoehe muss mindestens 10 cm sein!\n");
        printf("Bitte Programm neu starten.\n");
        return 0;
    }

    r = sqrt(V / (PI * h));
    gCola = V * DICHTE_COLA;
    A = 2 * PI * r * r + 2 * PI * r * h;
    gDose = A * DICHTE_ALU / 50;
    gTotal = gCola + gDose;

    printf("\nResultate:\n");
    printf("Totalgewicht: %.1f g\n", gTotal);
    printf("Oberflaeche : %.1f cm2\n", A);

    return 0;
}