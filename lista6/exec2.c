#include <stdio.h>

int main() {
int numeros[8];
int i, soma = 0;
 for(i = 0; i < 8; i++){
     printf("Digite o número da posição %i: ", i);
     scanf("%i", &numeros[i]);
     soma += numeros[i];
 }
printf("Soma = %i\n", soma);
     
 
    return 0;
}
