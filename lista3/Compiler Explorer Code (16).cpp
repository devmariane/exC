#include <stdio.h> 

//calcula peso ideal para homens
float homens (float h){
    float pesoIdeal;
    pesoIdeal = (72.7 * h) - 58;

    return pesoIdeal;
}

//calcula peso ideal para mulheres
float mulheres (float h){
    float pesoIdeal;
    pesoIdeal = (62.1 * h) - 44.7;

    return pesoIdeal;
}

int main(){
    float altura;
    char genero;

    scanf("%f\n", &altura);
    scanf("%c\n", &genero);

    if (genero == 'm' || genero == 'M'){
        printf("Seu peso ideal é: %.2f\n", homens(altura));
    } else if (genero == 'f' || genero == 'F'){
        printf("Seu peso ideal é: %.2f\n", mulheres(altura));
    }
     else{
        printf("Digite f para feminino ou m para masculino.\n");
    }

    return 0;
}