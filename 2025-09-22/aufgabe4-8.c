#include <stdio.h>

int main() {
    // Variable declarations (D = Deklarationen)
    float radius, height;           // Input variables for radius and height
    float surface_area, volume;     // Output variables for surface area and volume
    const float pi = 3.14159;      // Constant for pi
    
    printf("Berechnung der Oberflaeche und des Inhaltes eines Zylinders\n");
    printf("================================================================\n\n");
    
    // Input (E = Eingabe)
    printf("Bitte geben Sie den Radius des Zylinders ein [cm]: ");
    scanf("%f", &radius);
    
    printf("Bitte geben Sie die Hoehe des Zylinders ein [cm]: ");
    scanf("%f", &height);
    
    // Processing (V = Verarbeitung)
    // Surface area formula: 2 * pi * r * (r + h)
    surface_area = 2 * pi * radius * (radius + height);
    
    // Volume formula: pi * r^2 * h
    volume = pi * radius * radius * height;
    
    // Output (A = Ausgabe)
    printf("\nDie Oberflaeche des Zylinders betraegt: %.2f cm2\n", surface_area);
    printf("Das Volumen des Zylinders betraegt    : %.2f cm3\n", volume);
    
    return 0;
}