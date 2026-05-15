#include <stdio.h>

void main(){
    int cont_pos = 0, cont_neg = 0, cont_zero = 0, num;

    for(int i = 1; i<=10; i++){
        printf("\ndigite o %d numero: ", i);
        scanf("%d", &num);
        if(num > 0){
            cont_pos++;
        }else if(num < 0){
            cont_neg++;
        }else if(num ==0){
            cont_zero++;
        }
    }
    printf("\nTemos: %d positivos, %d negativos e %d zeros", cont_pos,cont_neg, cont_zero);
}