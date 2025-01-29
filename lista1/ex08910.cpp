#include <stdio.h>
int main() {
/*Escreva um programa para ler o número de lados de um polígono regular e imprimir o seguinte:
− Se o número de lados for igual a 3 escrever TRIÂNGULO.
− Se o número de lados for igual a 4 escrever QUADRADO.
− Se o número de lados for igual a 5 escrever PENTÁGONO.
− Se o número de lados for igual a 6 escrever HEXÁGONO.
Acrescente as seguintes mensagens à solução do exercício anterior
conforme o caso.
− Caso o número de lados seja inferior a 3 escrever NÃO É UM POLÍGONO.
− Caso o número de lados seja superior a 6 escrever POLÍGONO NÃO IDENTIFICADO.
Complementando o problema anterior, além de identificar o tipo de polígono, leia a medida do
lado do polígono e calcule sua área. O programa deve utilizar uma estrutura switch-case para
decidir que fórmula de cálculo utilizar, de acordo com o número de lados do polígono. Se o
número de lados for diferente de 3, 4, 5 ou 6 o programa deve informar: “não sei calcular a área”.
Áreas:
• Triângulo: A = L*L*1.73/4
• Quadrado: A = L*L
• Pentágono: A = 2 * L * L / 2.905
• Hexágono: A = 6*L*L*1.73/4;*/
    int lados;
    float area;
    scanf("%d", &lados);
    lados= 3;
    switch (lados){
        case 1:
            printf("não sei calcular a área");
            break;
        case 2:
            printf("não sei calcular a área");
            break;
        case 3:
            area = lados*lados*1.73/4;
            printf("%f", area);
            break;
        case 4:
            area = lados*lados;
            printf("%f", area);
            break;
        case 5:
            area = 2*lados*lados/2.905;
            printf("%f", area);
            break;
        case 6:
            area = 6*lados*lados*1.73/4;
            printf("%f", area);
            break;
        default:
            printf("POLÍGONO NÃO IDENTIFICADO");
    }
    return 0;
}