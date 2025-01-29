#include <stdio.h>

int main() {
    char str[100];
    int i, cont = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A' || 
            str[i] == 'e' || str[i] == 'E' || 
            str[i] == 'i' || str[i] == 'I' || 
            str[i] == 'o' || str[i] == 'O' || 
            str[i] == 'u' || str[i] == 'U') {
            cont++;
            printf("Vogal encontrada: %c (posição %d)\n", str[i], i);
        }
    }

    printf("Número total de vogais: %d\n", cont);
    return 0;
}
