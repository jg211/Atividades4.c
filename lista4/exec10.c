#include <stdio.h>

int main() {
    int i, numero;
    int maior, menor;

    for (i = 1; i <= 5; i++) {
        printf("Informe um número:\n");
        scanf("%d", &numero);

        if (i == 1) {
            // initialize with the first number
            maior = numero;
            menor = numero;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
