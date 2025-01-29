#include <stdio.h>
 
int main() {
float peso, altura, imc;
int imc2;
scanf("%f %f", &peso, &altura);
    peso = 56;
    altura = 1.67;
    imc = peso / (altura * altura);
    if (imc < 18.5){
        imc2 = 1;
    }
        if (18.5 <= imc && imc <=24.9){
        imc2 = 2;
    }
        if (25 <= imc && imc <=29.9){
        imc2 = 3;
    }
        if (imc >= 30){
        imc2 = 4;
    }
    switch (imc2) 
    {
        case 1: 
            printf("IMC: %.2f - Categoria: Abaixo do peso", imc);
            break;
        case 2: 
            printf("IMC: %.2f - Categoria: Peso normal", imc);
            break;
        case 3: 
            printf("IMC: %.2f - Categoria: Sobrepesol", imc);
            break;
        case 4: 
            printf("IMC: %.2f - Categoria: Obesidade", imc);
            break;
        default:
            printf("Valor não identificado");
    }

 
    return 0;
}