#include<stdio.h>
int main()
{
    int num1, num2;
    printf(" digite dois numeros: ");
    printf("\nNumero 1: ");
    scanf("%d",&num1);
    printf("\nnumero 2: ");
    scanf("%d",&num2);
    if(num1 > num2){
        printf("o numero %d eh maior que %d", num1, num2);
    }
    if(num1 < num2){
        printf("o numero %d eh menor que %d", num1, num2);
    }
    if(num1 == num2){
        printf("os nummeros sao iguais");
    }   
    return 0; 
}