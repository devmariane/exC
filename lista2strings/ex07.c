#include <string.h>
#include <stdio.h>

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

    for (int i = 0; i < 12; i++) {
        printf("%s (%s) - %d dias\n", meses[i].nome, meses[i].abreviacao, meses[i].dias);
    }
    return 0;
}