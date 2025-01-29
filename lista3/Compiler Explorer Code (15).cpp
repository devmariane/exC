#include <stdio.h> 

int anoBissexto (int ano){
    if ((ano % 4 == 0 && ano % 100  != 0) || ano % 400 == 0 ){
        return 1;
    }
    else{ 
        return 0;
    }
}

int dataValida(int dia, int mes, int ano){
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        if (dia > 0 && dia <= 31) {
            return 1; //retorno verdadeiro
        }   
        else{
            return 0; //retorno falso
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if (dia > 0 && dia <= 30) {
            return 1; //retorno verdadeiro
        }   
        else{
            return 0; //retorno falso
        }
    } else if ( mes == 2){
        if (anoBissexto(ano)){
            if (dia > 0 && dia <= 29){
                return 1;
            }
            else {
                return 0;
            }
        } else if (dia > 0 && dia <= 28){
                return 1;
            }
            else {
                return 0;
            }
    }
    else return 0;  
}

int main(){
    int dia, mes, ano;
    scanf ("%d %d %d", &dia, &mes, &ano);

    if(ano >= 0){
        if (dataValida(dia, mes, ano)){
            printf("Data válida\n");
        }
        else{
            printf("Data inválida\n");
        }
        
    }
    else{ 
        printf("Ano inválido\n");
    }
    return 0;
}