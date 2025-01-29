#include <stdio.h>
 /*Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.

*/
int main() {
    float valortotal = 0.0;
    int valor=0;
    int moedas = 0;
    int nCem=0;
    int nCinquenta=0;
    int nVinte=0;
    int nDez=0;
    int nCinco=0;
    int nDois=0;
    int nUm=0;
    int n05=0;
    int n025=0;
    int n010=0;
    int n005=0;
    int n01=0;
    scanf("%f", &valortotal);
    valor = valortotal;
    moedas = (valortotal - valor) * 100;
    if(valor>=100){
        nCem = valor/100.0;
        valor = valor - (nCem * 100.0);
    }
    if(valor>=50){
        nCinquenta = valor/50;
        valor = valor - (nCinquenta * 50);
    }
    if(valor>=20){
        nVinte = valor/20;
        valor = valor - (nVinte * 20);
    }
    if(valor>=10){
        nDez = valor/10;
        valor = valor - (nDez * 10);
    }
    if(valor>=5){
        nCinco = valor/5;
        valor = valor - (nCinco * 5);
    }
    if(valor>=2){
        nDois = valor/2;
        valor = valor - (nDois * 2);
    }    
    if(valor>=1){
        nUm = valor;
        valor = valor - (nUm);
    }
    if(moedas>=50){
        n05 = moedas/50;
        moedas = moedas - (n05 * 50);
    }
    if(moedas>=25){
        n025 = moedas/25;
        moedas = moedas - (n025 * 25);
    }
    if(moedas>=10){
        n010 = moedas/10;
        moedas = moedas - (n010 * 10);
    }
    if(moedas>=5){
        n005 = moedas/5;
        moedas = moedas - (n005 * 5);
    }
    if(moedas>=0){
        n01 = moedas;
    }
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", nCem, nCinquenta, nVinte, nDez, nCinco, nDois, nUm, n05, n025, n010, n005, n01);
    
}