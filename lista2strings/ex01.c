
#include <stdio.h>
#include <string.h>
int main()
{
    //1. Faça um programa que conte o número de caracteres em uma string (sem contar
    //o '\0') e imprima o resultado.
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    printf("Número de caracteres: %ld\n", strlen(str) - 1);
}