#include <stdio.h>
int main(){
/*Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um
percurso, calcule o consumo em Km/l e escreva a mensagem de acordo com a tabela abaixo:
Consumo Km/l Mensagem
menor que 8 Venda o carro!
entre 8 e 14 Econômico!
maior que 12 Super econômico!*/
    float distancia, litros, consumo;
    scanf("%f", &distancia);
    scanf("%f", &litros);
    consumo =  distancia/litros;
    if (consumo < 8){
        printf("Venda o carro!");
    }
    else if( consumo < 14){
        printf("Economico!");
    }
    else{
        printf("Super economico!");
    }
    return 0;
}