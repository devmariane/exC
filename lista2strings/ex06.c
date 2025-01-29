#include <string.h>
#include <stdio.h>

int main()
{
    char str[100];
    int palindromo = 1;
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    int tamanho = strlen(str) - 1;
    for (int i = 0; i < tamanho / 2; i++) {
        char inicio = str[i];
        char fim = str[tamanho - i - 1];
        if (inicio >= 'A' && inicio <= 'Z') inicio += 32;
        if (fim >= 'A' && fim <= 'Z') fim += 32;
        if (inicio != fim) {
            palindromo = 0;
            break;
        }
    }
    if (palindromo) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }
    return 0;
}