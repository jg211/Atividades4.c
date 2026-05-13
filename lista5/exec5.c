#include <stdio.h>

int main() {
 int codigo;
 printf("Digite o codigo de acesso: ");
 scanf("%i", &codigo);
 while(codigo != 4321){
     printf("CODIGO INCORRETO\n");
    printf("Digite o codigo de acesso: ");
     scanf("%i", &codigo);
 }
  printf("ACESSO LIBERADO");
 

    return 0;
}
