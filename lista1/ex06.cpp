#include <stdio.h>
int main(){
/*Leia a nota e o número de faltas de um aluno e escreva seu conceito. De acordo com a tabela
abaixo, quando o aluno tem mais de faltas ocorre uma redução do conceito.
Nota Conceito (até 20 faltas) Conceito (mais de 20
faltas)
9.0 a 10.0 A B
7.5 a 8.9 B C
5.0 a 7.4 C D
4.0 a 4.9 D E
0.0 a 3.9 E F*/
    float nota;
    int faltas;
    printf("nota: \n");
    scanf("%f", &nota);
    printf("Faltas: \n");
    scanf("%d", &faltas);
    if(faltas <= 20){
        if(nota >= 9){
            printf("Nota A");
        }
        if(nota >=  7.5 && nota < 9){
            printf("Nota B");
        }
        if(nota >=  5 && nota < 7.5){
            printf("Nota C");
        }
        if(nota >= 4 && nota < 5){
            printf("Nota D");
        }
        if(nota < 4){
            printf("Nota E");
        }
    }else if(nota >= 9){
        printf("Nota B");
    }
    else if(nota >=  7.5 && nota < 9){
        printf("Nota C");
    }
    else if(nota >=  5 && nota < 7.5){
        printf("Nota D");
    }
    else if(nota >= 4 && nota < 5){
        printf("Nota E");
    }
    else if(nota < 4){
        printf("Nota F");
    }
    return 0;
}