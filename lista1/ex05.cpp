#include <stdio.h>
int main(){
/*Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a
seguir, verifique e mostre qual a classificação dessa pessoa.
Altura Peso
até 60 60 a 90 (inclusive) Acima de 90
Menor que 1,20 A D G
De 1,20 a 1,70 B E H
Maior que 1,70 C F I
*/
    float altura, peso;
    scanf("%f",&altura);
    scanf("%f", &peso);
    if (altura < 1.20 && peso < 60){
        printf("grupo A");
    }
    if (altura >= 1.20 && altura <= 1.70 && peso < 60){
        printf("grupo B");
    }
    if (altura > 1.70 && peso < 60){
        printf("grupo C");
    }
    if (altura < 1.20 && peso >= 60 && peso <= 90){
        printf("grupo D");
    }
    if (altura >= 1.20 && altura <= 1.70 && peso >= 60 && peso <= 90){
        printf("grupo E");
    }
    if (altura > 1.70 && peso >= 60 && peso <= 90){
        printf("grupo F");
    }
    if (altura < 1.20 && peso < 90){
        printf("grupo G");
    }
    if (altura >= 1.20 && altura <= 1.70 && peso < 90){
        printf("grupo H");
    }
    if (altura > 1.70 && peso < 90){
        printf("grupo I");
    }
    return 0;
}