#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            // Skip printing when i is 5
            continue;
        }
        if (i == 8) {
            // Stop the loop when i is 8
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}
