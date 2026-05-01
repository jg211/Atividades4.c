#include <stdio.h>

int main() {
    int numero, soma = 0;

    while (soma <= 100) {
        printf("Informe um número:\n");
        scanf("%d", &numero);
        soma += numero;
    }

    printf("Soma final: %d\n", soma);

    return 0;
}
