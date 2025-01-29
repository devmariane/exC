
#include <stdio.h>
#include <string.h>
int main()
{
    //2. Faça um programa que leia uma string e a imprima de trás para frente
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    printf("String invertida: ");
    for (int i = strlen(str) - 2; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}