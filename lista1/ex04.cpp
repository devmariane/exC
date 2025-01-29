#include <stdio.h>
int main(){
/*Escreva um programa que, dada a idade de um nadador, classifique-o em uma das categorias
abaixo:
Categoria Idade
Infantil A 5 a 7
Infantil B 8 a 10
Juvenil A 11 a 13
Juvenil B 14 a 17
Sênior maiores que 18*/
    int idade;
    scanf("%d", &idade);
    idade = 20;
    if (idade >= 5 && idade <= 7){
        printf("Infantil A");
    }
    if (idade > 7 && idade <= 10){
        printf("Infantil B");
    }
    if (idade > 10 && idade <= 13){
        printf("Juvenil A");
    }
    if (idade > 13 && idade <= 17){
        printf("Juvenil B");
    }
    if (idade >= 18){
        printf("Senior");
    }
    return 0;
}