#include <stdio.h>

int main() {
    // Table header
    printf("--------------------------------------------------\n");
    printf("| %-5s | %-15s | %-10s |\n", "ID", "Name", "Score");
    printf("--------------------------------------------------\n");

    // Table rows (Beispieleinträge)
    printf("| %-5d | %-15s | %-10.2f |\n", 1, "Alice", 95.50);
    printf("| %-5d | %-15s | %-10.2f |\n", 2, "Bob", 88.75);
    printf("| %-5d | %-15s | %-10.2f |\n", 3, "Charlie", 72.00);

    printf("--------------------------------------------------\n");

    return 0;
}
