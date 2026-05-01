#include <stdio.h>

int main() {
    int i, numero;
    int positivos = 0, negativos = 0, zeros = 0;

    for (i = 1; i <= 10; i++) {
        printf("Informe um número:\n");
        scanf("%d", &numero);

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        } else {
            zeros++;
        }
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Zeros: %d\n", zeros);

    return 0;
}
