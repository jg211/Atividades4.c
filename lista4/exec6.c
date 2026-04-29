#include <stdio.h>

int main() {
    int senha;
    printf("Informe a sua senha\n");
    scanf("%d", &senha);
    while (senha != 1234) {
        printf("Informe a senha novamente:\n");
        scanf("%d", &senha);
    } if(senha == 1234){
          printf("Login completo");  
    }
   
return 0;
}
