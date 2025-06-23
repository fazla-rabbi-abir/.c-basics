#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {           // Outer loop for rows
        for (int j = 1; j <= 4; j++) {       // Inner loop for columns
            printf("%d ", j);                // Print numbers 1 to 4
        }
        printf("\n");                        // Move to next line after each row
    }

    return 0;
}
