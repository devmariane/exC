#include <stdio.h>
int main(){
/*Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor
salário terão um aumento proporcionalmente maior do que os funcionários com um salário maior,
e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus de salarial.
Faça um programa que leia:
• valor do salário atual do funcionário;
• o tempo de serviço desse funcionário na empresa (número de anos de trabalho na
empresa).
• use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o
valor do salário final reajustado, ou uma mensagem caso o funcionário não tenha direito
a nenhum aumento.
Salário Atual Reajuste (%) Tempo de Serviço Bônus
Até 500,00 25% Abaixo de 1 ano Sem bônus
Até 1000,00 20% De 1 a 3 anos 100,00
Até 1500,00 15% De 4 a 6 anos 200,00
Até 2000,00 10% De 7 a 10 anos 300,00
Acima de 2000,00 Sem reajuste Mais de 10 anos 500,00*/
    int tempo;
    float salario;
    scanf("%d", &tempo);
    scanf("%f", &salario);
    tempo = 1;
    salario = 1800;
    if (salario <= 500 && tempo < 1){
        salario = salario + (salario * 0.25);
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 500 && salario <=1000 && tempo < 1){
        salario = salario + (salario * 0.20);
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 1000 && salario <=1500 && tempo < 1){
        salario = salario + (salario * 0.15);
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 1500  && salario <=2000 && tempo < 1){
        salario = salario + (salario * 0.1);
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 2000  && tempo < 1){
        printf("Sem direito a aumento");
        return 0;
    }


    if (salario <= 500 && tempo >= 1 && tempo <= 3){
        salario = salario + (salario * 0.25) + 100;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 500 && salario <=1000 && tempo >= 1 && tempo <= 3){
        salario = salario + (salario * 0.20) + 100;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 1000 && salario <=1500 && tempo >= 1 && tempo <= 3){
        salario = salario + (salario * 0.15) + 100;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 1500  && salario <=2000 && tempo >= 1 && tempo <= 3){
        salario = salario + (salario * 0.1) + 100;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 2000  && tempo >= 1 && tempo <= 3){
        salario = salario + 100;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }


    if (salario <= 500 && tempo >= 4 && tempo <= 6){
        salario = salario + (salario * 0.25) + 200;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 500 && salario <=1000 && tempo >= 4 && tempo <= 6){
        salario = salario + (salario * 0.20) + 200;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 1000 && salario <=1500 && tempo >= 4 && tempo <= 6){
        salario = salario + (salario * 0.15) + 200;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 1500  && salario <=2000 && tempo >= 4 && tempo <= 6){
        salario = salario + (salario * 0.1) + 200;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 2000  && tempo >= 4 && tempo <= 6){
        salario = salario + 200;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }

    if (salario <= 500 && tempo >= 7 && tempo <= 10){
        salario = salario + (salario * 0.25) + 300;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 500 && salario <=1000 && tempo >= 7 && tempo <= 10){
        salario = salario + (salario * 0.20) + 300;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 1000 && salario <=1500 && tempo >= 7 && tempo <= 10){
        salario = salario + (salario * 0.15) + 300;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 1500  && salario <=2000 && tempo >= 7 && tempo <= 10){
        salario = salario + (salario * 0.1) + 300;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 2000  && tempo >= 7 && tempo <= 10){
        salario = salario + 300;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }


    if (salario <= 500 && tempo > 10){
        salario = salario + (salario * 0.25) + 500;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 500 && salario <=1000 && tempo > 10){
        salario = salario + (salario * 0.20) + 500;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 1000 && salario <=1500 && tempo > 10){
        salario = salario + (salario * 0.15) + 500;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 1500  && salario <=2000 && tempo > 10){
        salario = salario + (salario * 0.1) + 500;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    if (salario > 2000  && tempo >= 7 && tempo > 10){
        salario = salario + 500;
        printf("Salario reajustado: %.2f", salario);
        return 0;
    }
    return 0;
}