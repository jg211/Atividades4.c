#include <stdio.h>

int main() {
int numeros[10];
int pos;
 for(pos = 0; pos < 10; pos++){
     printf("Digite o número da posição %i: ", pos);
     scanf("%i", &numeros[pos]);
     }
 for(pos = 0; pos < 10; pos++){
  if(numeros[pos] < 0){
 numeros[pos] = 0;
 }
 }
  for(pos = 0; pos < 10; pos++){
  printf("numeros[%d] = %d\n",pos, numeros[pos]);
  }
  return 0;
}
