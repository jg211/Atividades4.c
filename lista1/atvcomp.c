#include <stdio.h>

int main() {
    int opcao;

    printf("Escolha a questao (1 a 10): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        int num;
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num > 0) {
            printf("POSITIVO\n");
        } else if (num < 0) {
            printf("NEGATIVO\n");
        } else {
            printf("ZERO\n");
        }
    }

    else if (opcao == 2) {
        int idade;
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade >= 18) {
            printf("MAIOR DE IDADE\n");
        } else {
            printf("MENOR DE IDADE\n");
        }
    }

    else if (opcao == 3) {
        int num;
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            printf("PAR\n");
        } else {
            printf("IMPAR\n");
        }
    }

    else if (opcao == 4) {
        float nota;
        printf("Digite a nota: ");
        scanf("%f", &nota);

        if (nota >= 7) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }
    }

    else if (opcao == 5) {
        float temp;
        printf("Digite a temperatura: ");
        scanf("%f", &temp);

        if (temp <= 15) {
            printf("FRIO\n");
        } else if (temp <= 30) {
            printf("AGRADAVEL\n");
        } else {
            printf("QUENTE\n");
        }
    }

    else if (opcao == 6) {
        int a, b;
        printf("Digite dois numeros: ");
        scanf("%d %d", &a, &b);

        if (a > b) {
            printf("MAIOR: %d\n", a);
        } else if (b > a) {
            printf("MAIOR: %d\n", b);
        } else {
            printf("NUMEROS IGUAIS\n");
        }
    }

    else if (opcao == 7) {
        int num;
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num >= 10 && num <= 20) {
            printf("DENTRO DO INTERVALO\n");
        } else {
            printf("FORA DO INTERVALO\n");
        }
    }

    else if (opcao == 8) {
        float salario;
        printf("Digite o salario: ");
        scanf("%f", &salario);

        if (salario <= 1500) {
            printf("SALARIO BAIXO\n");
        } else if (salario <= 3000) {
            printf("SALARIO MEDIO\n");
        } else {
            printf("SALARIO ALTO\n");
        }
    }

    else if (opcao == 9) {
        float nota;
        printf("Digite a nota: ");
        scanf("%f", &nota);

        if (nota >= 9) {
            printf("CONCEITO A\n");
        } else if (nota >= 7) {
            printf("CONCEITO B\n");
        } else if (nota >= 5) {
            printf("CONCEITO C\n");
        } else {
            printf("CONCEITO D\n");
        }
    }

    else if (opcao == 10) {
        int dia;
        printf("Digite um numero de 1 a 7: ");
        scanf("%d", &dia);

        if (dia == 1) {
            printf("Domingo\n");
        } else if (dia == 2) {
            printf("Segunda\n");
        } else if (dia == 3) {
            printf("Terca\n");
        } else if (dia == 4) {
            printf("Quarta\n");
        } else if (dia == 5) {
            printf("Quinta\n");
        } else if (dia == 6) {
            printf("Sexta\n");
        } else if (dia == 7) {
            printf("Sabado\n");
        } else {
            printf("DIA INVALIDO\n");
        }
    }

    else {
        printf("Opcao invalida\n");
    }

    return 0;
}
   
