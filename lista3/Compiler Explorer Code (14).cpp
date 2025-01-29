#include <stdio.h>
#include <math.h>
 
float calculoCusto (float valorPago){
    float custo;

    // ValorPago = custo + % impostos sobre o custo + % Lucro sobre o custo
    // Assim temos a seguinte fórmula: 
    // ValorPago = custo + custo*0.45 + custo*0.12 
    // ValorPago = 1.57*custo 
    // custo = ValorPago / 1.57;
    // Então sabendo quanto foi pago pelo veículo, valor que será recebido 
    // como parametro de entrada da função, basta aplicar a fórmula obtida acima.

    custo = valorPago / 1.57;
    return custo;
}

float calculoLucro (float custoVeiculo){
    return custoVeiculo * 0.12;
}


float calculoImposto (float custoVeiculo){
    return custoVeiculo * 0.45;
}


int main() {

    float precoPago;
    scanf("%f", &precoPago);

    float precoCusto = calculoCusto(precoPago);
    printf("Custo do veículo: R$ %.2f\n", precoCusto);
    printf("Imposto: R$ %.2f\n", calculoLucro(precoCusto));
    printf("Lucro: R$ %.2f\n", calculoImposto(precoCusto));

    return 0;
}