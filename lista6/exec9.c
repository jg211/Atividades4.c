#include <stdio.h>

int main() {
int a[5], b[5], c[5];
int pos;
printf("Alimentando vetor a\n");
 for(pos = 0; pos < 5; pos++){
     printf("Digite o número da posição %d: ",pos);
     scanf("%d",b);
 }
 printf("Alimentand o vetor b\n");
 for(pos = 0; pos < 5; pos++){
     printf("Digite o número da posição %d: ",pos);
     scanf("%d",b);
 }
 printf("Alimentando o vetor c\n");
  for(pos = 0; pos < 5; pos++){
 c[pos] = a[pos] + b[pos];
  }
  printf("Resultado vetor c");
    for(pos = 0; pos < 5; pos++){
printf("%d\n", c[pos]);
}

 
  return 0;
}
