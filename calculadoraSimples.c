#include<stdio.h>
int main()
{
    float div, sum, sub, multi, num1, num2;
    printf("selecione a operacao matematica que quer realizar: ");
    printf("numero1: ");
    scanf("%f",&num1);
    printf("numero 2: ");
    scanf("%f",&num2);
    sum = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;
    if(num2 == 0){
        printf("operacao invalida");
        return 0;
    }else{
        printf("soma: %.2f, subtracao: %.2f, multiplicacao: %.2f, divisao: %.2f", sum, sub, multi, div);
        return 0;
    }    
}