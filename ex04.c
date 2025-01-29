#include <stdio.h>
/*Faça um programa que receba a idade e o peso de um concorrente e indique sua categoria*/
int main() {
    int peso, idade;
    scanf("%d %d", &peso, &idade);
    if (idade <=14){
        if(peso<=45){
            printf("infantil leve");
        }
        else{
            printf("infantil pesado");
        }
    }
   if (idade <=17 && idade >14){
        if(peso<=60){
            printf("juvenil leve");
        }
        else{
            printf("juvenil pesado");
        }
    }
    if (idade >=18 ){
        if(peso<=85){
            printf("adulto leve");
        }
        else{
            printf("adulto pesado");
        }
    }

}