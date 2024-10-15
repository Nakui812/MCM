#include <stdio.h>

int main() {
    int num1, num2, maggiore, minore, mcm;

    printf("Inserisci due numeri interi: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        maggiore = num1;
        minore = num2;
    } else {
        maggiore = num2;
        minore = num1;
    }

    mcm = maggiore;
    while (mcm % minore != 0) {
        mcm += maggiore;
    }

    printf("Il MCM di %d e %d è: %d\n", num1, num2, mcm);

    return 0;
}
