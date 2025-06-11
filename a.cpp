#include <stdio.h>

int main() {
    // Anzahl der Zeilen im Muster
    int zeilen = 11;

    // Schleife über jede Zeile
    for (int i = 1; i <= zeilen; i++) {
        // Schleife zur Ausgabe der Sterne
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Neue Zeile nach jeder Sternreihe
        printf("\n");
    }

    return 0;
}