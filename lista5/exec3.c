#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.00, deposito;

    do {
        printf("\nMenu\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");

        scanf("%d", &opcao);

        if(opcao == 1) {

            printf("Saldo atual: %.2f\n", saldo);

        } 
        else if(opcao == 2) {

            printf("Digite a quantidade: ");
            scanf("%f", &deposito);

            saldo += deposito;

            printf("Deposito realizado!\n");

        } 
        else if(opcao == 0) {

            printf("Programa encerrado.\n");

        } 
        else {

            printf("Opcao invalida!\n");

        }

    } while(opcao != 0);

    return 0;
}
