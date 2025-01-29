#include <stdio.h>

int main() {
    int positivo;
    float num, media;
    for(int i = 0; i<=5; i++){
        scanf("%f", &num);
        if (num>=0){
            positivo = positivo + 1;
            media = media + num;
        }
    }
    printf("%d valores positivos\n %.1f", positivo, media/positivo);
    return 0;
}
