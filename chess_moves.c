#include <stdio.h>

int main() {
    // bishop moves 5 times on the diagonal (up + right)
    printf("Bishop:\n");
    for (int i = 0; i < 5; i++) {
        printf("Up\n");
        printf("Right\n");
    }
    printf("\n");

    // rook moves 5 times to the right
    printf("Rook:\n");
    int j = 0;
    while (j < 5) {
        printf("Right\n");
        j++;
    }
    printf("\n");

    // queen moves 8 times to the left
    printf("Queen:\n");
    int k = 0;
    do {
        printf("Left\n");
        k++;
    } while (k < 8);

    return 0;
}
