#include <stdio.h>
 
int main() {
    int a, b, c, triangulo, tipo;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a){
        tipo = 1;
    }
    else{
            triangulo = 0;
        }
    switch(tipo){
        case 1: 
            if (a == b && b == c);
            triangulo = 1;
            if (a == b && c!= a || a == c && b != c || b == c && a != c);
            triangulo = 2;
            if(a != b && b != c && a != c) {
                triangulo = 3;}
    }
    switch (triangulo){
        case 1:
            printf("O triângulo é Equilatero.");
            break;
        case 2:
            printf("O triângulo é Isoceles.");
            break;
        default:
            printf("O triangulo é Escaleno");
            break;
    }
 
    return 0;
}