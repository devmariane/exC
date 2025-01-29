#include <stdio.h>

int main() {
    int pares, num;
    for(int i = 0; i<=4; i++){
        scanf("%d", &num);
        if (num%2 ==0){
            pares = pares + 1;
        }
    }
    printf("%d valores pares\n", pares);
    return 0;
}
