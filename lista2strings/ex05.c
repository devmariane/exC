#include <string.h>
#include <stdio.h>

int main()
{
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    printf("String sem espaços: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}