
#include <stdio.h>
#include <string.h>
int main()
{
    //4. Faça um programa que substitua todas as ocorrências de um caractere específico
    //em uma string por outro caractere fornecido pelo usuário.
    char str[100], original, substituto;
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    printf("Digite o caractere a ser substituído: ");
    scanf(" %c", &original);
    printf("Digite o caractere substituto: ");
    scanf(" %c", &substituto);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == original) {
            str[i] = substituto;
        }
    }
    printf("String modificada: %s", str);
}