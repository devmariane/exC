#include <stdio.h> 
/*Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:

se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
Entrada
A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Saída
Imprima todas as classificações do triângulo especificado na entrada.*/
 
int main() {
    float a, b, c, n1, n2, n3 = 0.0;
    scanf("%f", a);
    scanf("%f", b);
    scanf("%f", c);

    if(a>=b && b>=c && a>=c){
       n1 = a;
       n2 = b;
       n3 = c;   

    }
    if(a>=b && c>=b && a>=c){
       n1 = a;
       n2 = c;
       n3 = b;
    }
    if(b>=a && a>=c &&b>=c){
       n1 = b;
       n2 = a;
       n3 = c;    
       }
    if(b>=c && c>=a && b>=a){
       n1 = b;
       n2 = c;
       n3 = a;       
        }
    if(c>=b && a>=b && c>=a){
       n1 = c;
       n2 = a;
       n3 = b;    
        }
    if(c>=b && b>=a && c>=a){
       n1 = c;
       n2 = b;
       n3 = a;    
    }
    if(n1 >= (n2 + n3)){
        printf("NAO FORMA TRIANGULO\n");
    }
    if((n1 * n1) == (n2 * n2)+(n3 * n3)){
        printf("TRIANGULO RETANGULO\n");
    }
    if((n1 * n1) > (n2 * n2) + (n3 * n3)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if((n1 * n1) < (n2 * n2) + (n3 * n3)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(n1 == n2 && n1 == n3){
        printf("TRIANGULO EQUILATERO\n");
    }
    if((n1 == n2  && n1 != n3) || (n2 == n3 && n2 != n1) || (n1 == n3 && n1 != n2)){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}