#include <stdio.h>

int main() {
int i , status;
int concluidas = 0, pendentes = 0;
for(i = 1; i <=8; i++){
    scanf("%i", &status);
if(status == 1){
    concluidas++;
}else{
 pendentes++;
}
}
printf("Concluidas:%i", concluidas);
printf("Pendentes:%i", pendentes);



    return 0;
}
