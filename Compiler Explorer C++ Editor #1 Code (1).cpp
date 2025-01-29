#include <stdio.h> 
#include <math.h>
 
int main() {
    float A, B, C, delta, r1 ,r2;
    A = 10.3;
    B = 203.0;
    C = 5.0;
    delta = (B * B) - 4 * A * C;
    printf("delta: %f\n", delta);
    if(A == 0 || delta < 0){
    printf("Impossivel calcular");
    }
    else{
    r1 = (-B + pow(delta, 0.5)) / (2 * A);
    r2 = (-B - pow(delta, 0.5)) / (2 * A);
    printf("R1 = %.5f\nR2 = %.5f", r1, r2);
    }

    return 0;
}