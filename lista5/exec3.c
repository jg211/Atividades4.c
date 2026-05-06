#include <stdio.h>

int main() {
int opcao;
float saldo = 1000.00, deposito;
do{
    printf("Menu\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Depositar\n");
    printf("0 - Sair\n");
scanf("%d", &opcao);
if(opcao == 1){
printf("%f", &saldo);
}else if (opcao == 2){
printf("Digite a quantidade");
scanf("%f", &deposito);
}else if (opcao == 0){
printf("programa encerrado");
}
}while(opcao != 0);



    return 0;
}
