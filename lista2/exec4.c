#include <stdio.h>
int main (){
      int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero <= 10) {
        printf("Categoria A\n");
    } else if (numero <= 20) {
        printf("Categoria B\n");
    } else if (numero <= 30) {
        printf("Categoria C\n");
    } else {
        printf("Fora da classificação\n");
    }

    
    return 0;
}
