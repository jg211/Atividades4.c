#include <stdio.h>

int main() {
    char resposta;
printf("Tem dinheiro?(s/n)\n");
scanf(" %c" , &resposta);
if(resposta == 's'){
    printf("Verdadeiro");
}else if(resposta == 'n'){
    printf("tem cartão?(s/n)\n");
    scanf(" %c" , &resposta);
    if(resposta == 's'){
        printf("Verdadeiro");
    }else if (resposta == 'n'){
        printf("Falso");
    }else{
        printf("Resposta Inválida");
    }
}else{
    printf("Resposta Inválida");
}

    return 0;
}
