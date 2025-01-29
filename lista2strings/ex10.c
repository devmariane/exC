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
    
        char nomeMes[20];
        char diaStr[10];
        int dia = 0;
    
        printf("Digite o nome do mês: ");
        fgets(nomeMes, sizeof(nomeMes), stdin);
        for (int i = 0; nomeMes[i] != '\0'; i++) {
            if (nomeMes[i] == '\n') {
                nomeMes[i] = '\0';
                break;
            }
        }
    
        printf("Digite o dia do mês: ");
        fgets(diaStr, sizeof(diaStr), stdin);
        for (int i = 0; diaStr[i] != '\0'; i++) {
            if (diaStr[i] >= '0' && diaStr[i] <= '9') {
                dia = dia * 10 + (diaStr[i] - '0');
            } else {
                break;
            }
        }
    
        int totalDias = dia;
        int encontrado = 0;
    
        for (int i = 0; i < 12; i++) {
            int match = 1;
            for (int j = 0; nomeMes[j] != '\0' && meses[i].nome[j] != '\0'; j++) {
                if (nomeMes[j] != meses[i].nome[j] &&
                    nomeMes[j] != meses[i].nome[j] + 32 &&
                    nomeMes[j] + 32 != meses[i].nome[j]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                if (dia < 1 || dia > meses[i].dias) {
                    printf("Dia inválido para o mês %s.\n", nomeMes);
                    return 1;
                }
                encontrado = 1;
                break;
            }
            totalDias += meses[i].dias;
        }
    
        if (encontrado) {
            printf("Total de dias desde 1º de janeiro até %s %d: %d\n", nomeMes, dia, totalDias);
        } else {
            printf("Nome do mês inválido.\n");
        }
        return 0;
    }