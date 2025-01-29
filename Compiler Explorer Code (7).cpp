#include <stdio.h>

int main() {
    int num=0, num1=0;
    scanf("%d", &num);
        for(int i = 0; i<=num; i++){
            scanf("%d", num1);
            if(num1%2==0){
               if(num1>=0){
                    if(num1>0){
                        printf("EVEN POSITIVE\n");
                    }
                    else{
                        printf("NULL\n");
                        }
                    }
               else{
                    printf("EVEN NEGATIVE\n");
               }
            }
            else if(num1>=0){
                printf("ODD POSITIVE\n");
            }
            else{
                printf("ODD NEGATIVE\n");
            }
        }
}
