#include <stdio.h>
#include <math.h>

int main() {
    int a=3, b=5, x=9, y=11, z=13;
    
    printf("Mathematische Rechenoperatoren\n");
    printf("------------------------------\n");
    
    // Formel 1 - Ganzzahl
    printf("Formel 1 mit Ganzzahltypen     = %d\n", 
           (int)(pow(a,1) * (1*a+1)/(a+b) * pow(1*a+1,1)/(a-b)));
    
    // Formel 1 - Fließkomma  
    printf("Formel 1 mit Fliesskommatypen  = %.6f\n", 
           pow(a,3.0) * (2*a+1.0)/(a+b) * pow(4*a+1,3.0)/(a-b));
    
    printf("\n");
    
    // Formel 2 - Ganzzahl
    printf("Formel 2 mit Ganzzahltypen     = %d\n", 
           -x * 10*y + 15*z/(y*y*x*x*x*y));
    
    // Formel 2 - Fließkomma
    printf("Formel 2 mit Fliesskommatypen  = %.6f\n", 
           -x * 10.0*y + 15.0*z/(y*y*x*x*x*y));

       printf("%f", pow(1,4));
       printf("%f", floor(1.4));
    
    return 0;
}