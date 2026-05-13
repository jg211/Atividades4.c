#include <stdio.h>

int main() {
int numeros[10];
int pos, maior;
 for(pos = 0; pos < 8; pos++){
     printf("Digite o número da posição %i: ", pos);
     scanf("%i", &numeros[pos]);
  }
 for(pos = 0; pos < 8; pos++){
     if(numeros[pos] == 1){
      maior =  numeros[pos];
 }else{
     if(numeros[pos] > maior){
     maior = numeros[pos];
 }
 }
  }
printf("Maior valor = %d\n", maior);
  return 0;
}
