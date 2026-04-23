#include <stdio.h>
int main() {
    int idade;
    printf("Digite a idade: ");
    scanf("%i", &idade);
    if(idade >= 18) {
    printf("Maior\n");
}else{
    printf("Menor\n");
}
    return 0;
}
