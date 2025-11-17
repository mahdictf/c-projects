
/*
Aufgabe: Demo Selektion
Autor:   F. Sauter
Datum    11.11.2024
*/
#include <stdio.h>
#include <math.h>
int main()
{ 
    // Deklaration
    int zahl1, zahl2;
    
    // Eingabe
    scanf("%d",  &zahl1);
    printf("\n");
    
    scanf("%d",  &zahl1);
    printf("\n");
    // Verarbeitung
    // Bedingte Anweisung
    // --------------------------------------
    if (zahl1 == 1)
    {
    }
    
    // Bedingte und alternative Anweisung
    // --------------------------------------
    if (zahl1 == 1)
    {
    }
    else
    {
        
    }
    
    // Verschachtelte Selektion
    // --------------------------------------
    if (zahl1 == 1)
    {
        if (zahl2 = 3)
        {
            
        }
    }
    
    // Mehrfache Selektion (Variante else if)
    // --------------------------------------
    if (zahl1 == 1)
    {
    }
    else if (zahl1 == 2)
    {
        
    }
    else
    {
    }
    
    // Alles kombiniert
    // --------------------------------------
    // Bedingte Anweisung
    if (zahl1 == 1)
    {
        // Verschachtelte Selektion
        if (zahl2 = 3)
        {
            
        }
    }
    // Mehrfache Selektion (Variante else if)
    else if (zahl1 == 2)
    {
        
    }
    // Bedingungen mit Verknüpfungsoperatoren
    else if ((zahl1 > 2) && !(zahl2 < 5))
    {
    }
    // Alternative Anweisung
    else
    {
    }
    
    // Mehrfache Selektion (Variante switch)
    // --------------------------------------
    switch (zahl1)
    {
        case 1:
            printf("zahl1 ist 1 ...\n");
            break;
        case 2:
            printf("zahl1 ist 2 ...\n");
            break;
        default:
            printf("zahl1 ist nicht 1 und nicht 2 ...\n");
    }   
    
    
    // Ausgabe
    printf("---------------------------------\n");
    
    return 0;
}
