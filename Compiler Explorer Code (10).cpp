#include <stdio.h>
 
int soma(int x, int y){
    return x + y;
}

int subtracao(int x, int y){
    return x - y;
}


int multiplicacao(int x, int y){
    return x * y;
}


int divisao(int x, int y){
    return x / y ;
}

int main() {

    int a, b;
    char op;

    scanf("%d %d\n", &a, &b);
    scanf("%c", &op);

    switch (op) {
        case '+': printf("%d\n", soma(a,b)); 
        break;

        case '-': printf("%d\n", subtracao(a,b)); 
        break;

        case '*': printf("%d\n", multiplicacao(a,b)); 
        break;

        case '/': printf("%d\n", divisao(a,b)); 
        break;
        
        default: printf("Operação inválida.\n");
    }
 
    

}