#include <stdio.h>
 
int main() {
    int a, b, c, triangulo;
    scanf("%d %d %d", &a, &b, &c);
    a=5;
    b=5;
    c=3;
    if ( a == b && a == c  ){
        triangulo == 1;  
    }
    if (a + b > c && a + c > b && b + c > a ){
        if (a == b && a != c || a == c && a != b || c == b && a != a){
            triangulo = 2;
            }
        else{
            triangulo = 3;
        }
    }
    switch (triangulo)
    {
        case 1:
            printf("O triângulo é Equilátero.");
            break;
        case 2:
            printf("O triângulo é Isósceles.");
            break;
        case 3:
            printf("O triângulo é Escaleno.");
            break;
        default :
            printf("Não Forma triângulo.");
    }
    return 0;
}