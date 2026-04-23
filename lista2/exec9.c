#include <stdio.h>

int main() {
    char resposta;
 printf("Tem dinheiro? (s/n): ");
    scanf(" %c", &resposta); 
    if (resposta == 's') {
        printf("Compra!\n");
    } else {
        printf("Consegue empréstimo? (s/n): ");
        scanf(" %c", &resposta);
        if (resposta == 's') {
            printf("Compra!\n");
        } else {
            printf("Não compra!\n");
        }
    }

    return 0;
}
