#include <stdio.h>

int main() {
    int numero, total = 0, positivos = 0;
    scanf("%d", &numero);
    while (numero != 0) {
        total++;
        if(numero > 0) {
            positivos++;
        }
        printf("Informe o número:\n");
        scanf("%d", &numero);
    }
    printf("Total: %d\n", total);
    printf("Positivos: %d\n", positivos);
return 0;
}
