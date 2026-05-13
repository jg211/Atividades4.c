#include <stdio.h>

int main() {
int numeros[8];
int pos;
 for(pos = 0; pos < 8; pos++){
printf("Digite o número da posição %i: ",pos);
scanf("%i", &numeros[pos]);
}
printf("Valores digitados:\n");
for(pos = 8; pos >= 0; pos--){
    printf("numeros[%d] = %d\n",pos, numeros[pos]);
}
    return 0;
}
