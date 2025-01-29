#include <stdio.h>
 
int main() {
    int x, divisao;
    scanf("%d", &x);
    x = 2008;
        if(x%4 == 0 && x%100 != 0){
                printf("O ano %d é bissexto", x );
        }
         else{
                printf("O ano %d não é bissexto", x); }
 
    return 0;
}