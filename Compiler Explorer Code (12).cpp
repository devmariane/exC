#include <stdio.h>
 
int centena (int n){
    return n / 100;
}

int dezena (int n){
    return n % 100 /10;
}

int unidade (int n){
    return n % 10;
}

int main() {

    int x;

    scanf("%d\n", &x);
    printf("%d centena(s)\n", centena(x));
    printf("%d dezena(s)\n", dezena(x));
    printf("%d unidade(s)\n", unidade(x));

    return 0;
}