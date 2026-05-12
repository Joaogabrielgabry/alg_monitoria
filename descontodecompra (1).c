#include<stdio.h>
int main()
{
    /*vi = valor inicial da compra 
    vd = valor final com o desconto
    val = valor */
    float vi, vd, val;
    printf("digite o preco da compra: ");
    printf("\npreco: ");
    scanf("%f",&vi);
    if(vi <= 0 ){
        printf("preco invalido");
    }
    if(vi > 100 ){
        vd = (vi *0.1);
        val= vi - vd;
        printf("o valor sem o desconto eh : %.2f, valor com o desconto: %.2f ", vi, val);
    }
    if(vi > 0 && vi < 101){
        printf("valor sem desconto: %.2f",vi);
    }
    return 0;
}