#include <stdio.h>
#include <string.h>
    int main() {
        typedef struct {
            char nome[20];
            char abreviacao[4];
            int dias;
        } Mes;
    
        Mes meses[12] = {
            {"Janeiro", "Jan", 31}, {"Fevereiro", "Fev", 28}, {"Março", "Mar", 31},
            {"Abril", "Abr", 30},   {"Maio", "Mai", 31},      {"Junho", "Jun", 30},
            {"Julho", "Jul", 31},   {"Agosto", "Ago", 31},   {"Setembro", "Set", 30},
            {"Outubro", "Out", 31}, {"Novembro", "Nov", 30}, {"Dezembro", "Dez", 31}};
    
        int mes;
        printf("Digite um número de 1 a 12: ");
        scanf("%d", &mes);
    
        if (mes < 1 || mes > 12) {
            printf("Número do mês inválido.\n");
            return 1;
        }
    
        int totalDias = 0;
        for (int i = 0; i < mes - 1; i++) {
            totalDias += meses[i].dias;
        }
        printf("Total de dias até o início do mês %d: %d\n", mes, totalDias);
        return 0;
    }