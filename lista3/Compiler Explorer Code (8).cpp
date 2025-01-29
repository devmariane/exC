#include <stdio.h>
 /*ex 1Calcule a soma dos dígitos que formam um inteiro positivo entre 0 e 999. Por ex.: 573⇒15*/
int main() {
    int num, cem, dez, uni; 
    scanf("%d", &num);
    cem = num/100;
    dez =(num/10) - cem*10;
    uni = num - ((cem* 100)+ dez *10);
    printf("%d", uni+dez+cem);
    return 0;
}