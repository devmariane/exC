#include <stdio.h>
#include <math.h>
 
float mGeometrica (float a, float b, float c){
    float media;

    media = pow(a * b * c, 1.0/3.0);
    return media;
}

float mPonderada (float a, float b, float c){
    float media;

    media = (a + b * 2 + c * 3) / 6;
    return media;
}


float mHarmonica (float a, float b, float c){
    float media;

    //o numerador no enunciado do exercicio está incorreto
    //o correto é 3 ao invés de 1
    media = 3 / (1 / a + 1 / b  + 1 / c) ;
    return media;
}

float mAritmetica (float a, float b, float c){
    float media;

    media = (a + b + c) / 3;
    return media;
}

int main() {

    float x, y, z;

    scanf("%f %f %f\n", &x, &y, &z);
    printf("Média geométrica: %f\n", mGeometrica(x, y, z));
    printf("Média ponderada: %f\n", mPonderada(x, y, z));
    printf("Média harmônica: %f\n", mHarmonica(x, y, z));
    printf("Média aritmética: %f\n", mAritmetica(x, y, z));

    return 0;
}