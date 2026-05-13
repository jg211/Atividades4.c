#include <stdio.h>

int main() {
int numeros[8];
int pos, soma = 0;
 for(pos = 0; pos < 8; pos++){
     printf("Digite o número da posição %i: ", pos);
     scanf("%i", &numeros[pos]);
 }
 for (pos = 0; pos < 8 ; pos++){
  soma+= numeros[pos];
 }
printf("Soma = %i\n", soma);
     
 
    return 0;
}
