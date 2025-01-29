#include <stdio.h>
int main(){
    /*Tendo como dados de entrada a altura a altura e o sexo de uma pessoa, construa um algoritmo
que calcule seu peso ideal, utilizando as seguintes fórmulas:
para homens: (72.7 * h) - 58
para mulheres: (62.1 * h) - 44.7*/
    float altura, peso;
    int sexo;
    printf("qual sua altura?\n");
    scanf ("%f", &altura);
    printf("qual seu sexo?\ndigite 1 para feminino\ndigite 2 para masculino\n");
    scanf ("%d", &sexo);
    switch (sexo){
    case 1:
        peso = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é %.2f", peso);
        break;
    case 2:
        peso = (72.7 * altura) - 58;
        printf("Seu peso ideal é %.2f", peso);
        break;
    default:
        printf("Valor digitado invalido");
        break;
        }
    return 0;
}