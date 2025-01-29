#include <stdio.h>
int main(){
    /*Faça um programa que calcule e mostre a área de um trapézio*/
    float baseMa, baseMe, altura, trapezio;
    scanf("%f", &baseMa);
    scanf("%f", &baseMe);
    scanf("%f", &altura);
    baseMa = 5;
    baseMe = 5;
    altura = 5;
    trapezio = ((baseMa + baseMe) * altura)/2;
    printf("A area do trapezio é %.2f", trapezio);
    return 0;
}