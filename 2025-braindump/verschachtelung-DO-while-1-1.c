

#include <stdio.h>

int main(void) {
    double note;

    // Eingabe wiederholen, bis gültig (0.0 – 6.0)
    do {
        printf("Bitte geben Sie Ihre Note ein (0.0 - 6.0): ");
        scanf("%lf", &note);

        if (note < 0.0 || note > 6.0) {
            printf("Ungültige Note! Geben Sie bitte einen Wert zwischen 0.0 und 6.0 ein.\n");
        }

    } while (note < 0.0 || note > 6.0);

    // Bewertung der Note
    if (note < 4.0) {
        printf("Sie haben nicht bestanden.\n");
    } else {
        printf("Sie haben bestanden.\n");
    }

    return 0;
}