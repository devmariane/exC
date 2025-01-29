#include <stdio.h>

int main() {
    int pares =0, num=0, positivos=0, negativos=0, impares=0;
    for(int i = 0; i<=4; i++){
        scanf("%d", &num);
        if (num%2 ==0){
            pares = pares + 1;
        }
        else{
            impares = impares + 1;
        }
        if(num>=0){
            positivos = positivos + 1;
        }
        else{
            negativos = negativos +1;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)", pares, impares, positivos, negativos);
    return 0;
}
