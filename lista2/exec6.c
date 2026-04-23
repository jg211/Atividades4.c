#include <stdio.h>
int main (){
      float nota;
      float frequencia;

    printf("Digite a nota e a frequência: ");
    scanf("%f %f" , &nota , &frequencia);

    if (nota >= 7 && frequencia >= 75) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    
    return 0;
}
